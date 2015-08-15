#! /usr/bin/python3

import os
import socket

s = socket.socket(socket.AF_INET,socket.SOCK_STREAM,socket.IPPROTO_TCP)
addr = ('localhost',81)
s.bind(addr)
s.listen(10)
while(True):
    conn,remote = s.accept()
    if(conn):
        while(True):
            try:
                data = conn.recv(4096)
                if(data != None):
                    if(len(data)==0):
                        conn.close()
                        print("normal close")
                    else:
                        print("data:",data)
            except Exception as e:
                print(e)
                conn.close()
                print("exceptiion close")
            continue
