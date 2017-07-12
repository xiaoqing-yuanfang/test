import socket
import sys
import json
import select
import time
 
HOST = '0.0.0.0'   # Symbolic name meaning all available interfaces
PORT = 9002 # Arbitrary non-privileged port
 
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
print 'Socket created'
 
try:
    s.bind((HOST, PORT))
    s.setblocking(False)
    s.listen(100)
except socket.error, msg:
    print 'Bind failed. Error Code : ' + str(msg[0]) + ' Message ' + msg[1]
    sys.exit()
     
print 'Socket bind complete'

fds = list()

while True:
    r, w, o = select.select([s], list(), list(), 1)
    if r:
        conn, addr = s.accept()
        print("Accept", addr, "Request")
        conn.setblocking(False)
        fds.append(conn)
    try:
        r, w, o = select.select(fds, fds, fds, 1)
    except Exception as e:
        print(e)
        continue
    if r:
        for fd in r:
            res = ""
            while True:
                res_tmp = fd.recv(4096)
                res += res_tmp
                if len(res_tmp) < 4096:
                    if len(res_tmp) == 0:
                        fd.close()
                        fds.remove(fd)
                    break
            try:
                json.loads(res)
                print(res)
            except Exception as e:
                print(e)
                print(res)
    if o:
        for fd in o:
            fd.close()
            fds.remove(fd)
