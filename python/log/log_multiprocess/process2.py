__author__ = 's10196'
import logging
from multiprocessing import Process,Queue
import time

log = logging.getLogger(__name__)
class ProcesssTwo(Process):
    def __init__(self, queue_in):
        Process.__init__(self)
        self.queue = queue_in
        self.num = 0
    def run(self):
        while True:
            try:
                item = self.queue.get()
            except Exception as e:
                print(e)