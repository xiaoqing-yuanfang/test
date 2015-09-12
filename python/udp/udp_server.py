
import socket
import Queue
import threading
import time
import sys

def thr_recv(q):
    print(sys._getframe().f_code.co_name)
    addr = ("127.0.0.1",3000)
    s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM,socket.IPPROTO_UDP)
    try:
        s.bind(addr)
        while(True):
            data = s.recv(4096)
            q.put(data)
    except Exception as e:
        print(e)
def thr_w2f(q):
    print(sys._getframe().f_code.co_name)
    with open("/tmp/tmp.txt","w") as f:
        while(True):
            try:
                data = q.get(timeout=5)
            except Queue.Empty:
                continue
            f.write(data)

if __name__ == '__main__':
    q = Queue.LifoQueue()
    thr_1 = threading.Thread(target=thr_recv,args=(q,))
    thr_2 = threading.Thread(target=thr_w2f,args=(q,))
    thr_1.start()
    thr_2.start()

    while(True):
        time.sleep(5)