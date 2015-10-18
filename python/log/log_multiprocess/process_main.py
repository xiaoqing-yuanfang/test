__author__ = 's10196'

import logging
import time
import process1
import process2

format_log = '%(asctime)s %(filename)s[line:%(lineno)d] %(levelname)s %(message)s'
logging.basicConfig(filename="test.log", filemode="w",
                    format=format_log,level=logging.DEBUG)

if __name__ == '__main__':
    p1 = process1.ProcesssOne()
    p2 = process2.ProcesssTwo()
    p1.start()
    p2.start()
    while True:
        logging.debug("main")
        time.sleep(5)