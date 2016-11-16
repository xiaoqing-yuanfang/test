package main

import (
	"fmt"
	"time"
)

var (
	timeLeft5Minute  int64
	timeLeft10Minute int64
	timeLeft30Minute int64
	timeLeft60Minute int64
	ch5              <-chan time.Time
	ch10             <-chan time.Time
	ch30             <-chan time.Time
	ch60             <-chan time.Time
)

func timeAfter5() {
	now := time.Now().Unix()
	timeLeft5Minute = 5*60 - now%(5*60)
	ch5 = time.After(time.Second * time.Duration(timeLeft5Minute))

}

func timeAfter10() {
	now := time.Now().Unix()
	timeLeft10Minute = 10*60 - now%(10*60)
	ch10 = time.After(time.Second * time.Duration(timeLeft10Minute))
}

func timeAfter30() {
	now := time.Now().Unix()
	timeLeft30Minute = 30*60 - now%(30*60)
	ch30 = time.After(time.Second * time.Duration(timeLeft30Minute))
}

func timeAfter60() {
	now := time.Now().Unix()
	timeLeft60Minute = 60*60 - now%(60*60)
	ch60 = time.After(time.Second * time.Duration(timeLeft60Minute))
}

func init() {
	ch5 = make(<-chan time.Time, 1)
	ch10 = make(<-chan time.Time, 1)
	ch30 = make(<-chan time.Time, 1)
	ch60 = make(<-chan time.Time, 1)
	timeAfter5()
	timeAfter10()
	timeAfter30()
	timeAfter60()
}

func loop() {
	for {
		select {
		case <-ch5:
			fmt.Println("5:", time.Now().Local())
			timeAfter5()
		case <-ch10:
			fmt.Println("10:", time.Now().Local())
			timeAfter10()
		case <-ch30:
			fmt.Println("30:", time.Now().Local())
			timeAfter30()
		case <-ch60:
			fmt.Println("60:", time.Now().Local())
			timeAfter60()
		}
	}
}

func main() {
	loop()
}
