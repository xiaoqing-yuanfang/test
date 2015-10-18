__author__ = 's10196'
import logging
from multiprocessing import Process,Queue
import time

log = logging.getLogger(__name__)
class ProcesssOne(Process):
    def run(self):
        while True:
            time.sleep(3)
            log.debug("hello")