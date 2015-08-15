
#! /usr/bin/python3

import os
import socket
import time

s = socket.socket(socket.AF_INET,socket.SOCK_STREAM,socket.IPPROTO_TCP)
addr = ("localhost",81)
s.connect(addr)
while(True):
    s.send("hello")
    time.sleep(5)
