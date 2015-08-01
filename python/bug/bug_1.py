#!/usr/bin/env python
import thread
import time

def thread_fn():
    for _ in xrange(1, 10):
        for _ in xrange(1, 100):
            time.strptime("2013-06-02", "%Y-%m-%d")

for _ in xrange(10):
    thread.start_new_thread(thread_fn, ())

time.sleep(1)
