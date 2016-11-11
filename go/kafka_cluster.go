package main

import (
	"log"
	"os"
	"os/signal"
	"strings"
	"sync"
	"syscall"
	"time"

	kc "github.com/elodina/go_kafka_client"
)

var (
	consumer    *kc.Consumer
	msgChannel  chan string
	successChan chan bool
)

type ZooKeeper struct {
	Hosts     string
	Workers   int
	TopicName string
}

func buildConsumerConfig(conf ZooKeeper) *kc.ConsumerConfig {
	config := kc.DefaultConsumerConfig()
	config.AutoOffsetReset = kc.SmallestOffset
	config.WorkerFailureCallback = func(_ *kc.WorkerManager) kc.FailedDecision {
		return kc.CommitOffsetAndContinue
	}
	config.WorkerFailedAttemptCallback = func(_ *kc.Task, _ kc.WorkerResult) kc.FailedDecision {
		return kc.CommitOffsetAndContinue
	}
	zkConfig := kc.NewZookeeperConfig()
	zkConfig.ZookeeperConnect = strings.Split(conf.Hosts, ",")
	zkConfig.MaxRequestRetries = 10
	zkConfig.ZookeeperSessionTimeout = 30 * time.Second
	zkConfig.RequestBackoff = 3 * time.Second
	config.Coordinator = kc.NewZookeeperCoordinator(zkConfig)
	config.NumConsumerFetchers = 1
	log.Printf("buildConsumerConfig conf:%s", conf)
	//config.NumWorkers = conf.Workers
	config.NumWorkers = conf.Workers
	return config
}

func processStrategy(_ *kc.Worker, msg *kc.Message, id kc.TaskId) kc.WorkerResult {
	value := string(msg.Value)
	msgChannel <- value
	return kc.NewSuccessfulResult(id)
}

func closeKafkaClient() {
	select {
	case <-consumer.Close():
		log.Printf("kafka client shutdown succeeded\n")
	case <-time.After(10 * time.Second):
		log.Fatalf("waiting closing kafka client timeout")
	}
	// Closing message channel for main process
	close(msgChannel)
}

func initKafka(conf ZooKeeper) {
	msgChannel = make(chan string, 4096)
	successChan = make(chan bool)
	config := buildConsumerConfig(conf)
	config.Strategy = processStrategy
	consumer = kc.NewConsumer(config)
	// FIXME: 1??
	go consumer.StartStatic(map[string]int{conf.TopicName: 1})
}

func init() {
	log.SetFlags(log.Lshortfile | log.LstdFlags)
}

func master() {
	var wg sync.WaitGroup
	log.Printf("Start Receive Messages... \n")
	for line := range msgChannel {
		wg.Add(1)
		go worker(line, &wg)
	}
	log.Printf("Waiting All Workers Done...\n")
	wg.Wait()
}

func worker(line string, wg *sync.WaitGroup) {
	log.Println(line)
	wg.Done()
	log.Printf("Worker Done")
}

func start_signal(pid int) {
	sigs := make(chan os.Signal, 1)
	log.Println(pid, "register signal notify")
	signal.Notify(sigs, syscall.SIGINT, syscall.SIGTERM, syscall.SIGQUIT)

	for {
		s := <-sigs
		log.Println("recv", s)

		switch s {
		case syscall.SIGINT, syscall.SIGTERM, syscall.SIGQUIT:
			log.Println("gracefull shut down")
			closeKafkaClient()
			log.Println(pid, "flush done, exiting")
			os.Exit(0)
		}
	}
}

func main() {
	conf := &ZooKeeper{}
	conf.Hosts = "10.153.56.156"
	conf.Workers = 5
	conf.TopicName = "test"
	initKafka(*conf)
	go master()
	start_signal(os.Getpid())

}
