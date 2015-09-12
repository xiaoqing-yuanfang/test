import multiprocessing
import socket

def send(num):
    if(None != num):
        return
    addr = ("127.0.0.1",3000)
    s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM,socket.IPPROTO_UDP)
    try:
        s.connect(addr)
        for i in range(1000):
            s.send("hello"+str(num)+"\n")
    except Exception as e:
        print(e)
if __name__ == '__main__':
    po = multiprocessing.Pool(1000)
    po.map(send,[i for i in range(1000)])
    print("client exit")