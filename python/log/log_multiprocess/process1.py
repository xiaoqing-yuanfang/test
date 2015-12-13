__author__ = 's10196'
import logging
from multiprocessing import Process,Queue
import time
import multiprocessing

log = logging.getLogger(__name__)
class ProcesssOne(Process):
    def run(self):
        while True:
            time.sleep(3)
            log.debug("hello")


if __name__ == '__main__':
    multiprocessing.log_to_stderr()
    log = multiprocessing.get_logger()
    log.setLevel(logging.DEBUG)
    log.debug("hello world")