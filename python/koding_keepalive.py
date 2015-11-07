# coding=utf8
__author__ = 's10196'

import atexit
import os
import sys
import urllib2
import paramiko
import threading
import random
import time
import signal
import logging

URL_KODING = "2007202759.koding.io"
PID_FILE = "/tmp/pid_koding.pid"
LOG_FILENAME = "/tmp/koding_ssh.log"
FORMAT = '%(asctime)-15s %(filename)s:%(lineno)d %(message)s'
logging.basicConfig(filename=LOG_FILENAME, filemode="w", level=logging.INFO, format=FORMAT)

def del_pid():
    try:
        os.remove(PID_FILE)
    except Exception as e:
        logging.info(e)


def deamon():
    try:
        pid = os.fork()
        if pid > 0:
            sys.exit(0)
    except OSError, e:
        sys.stderr.write("fork #1 failed: %d (%s)\n" % (e.errno, e.strerror))
        sys.exit(1)

    os.setsid()
    os.chdir("/")
    os.umask(0)

    try:
        pid = os.fork()
        if pid > 0:
            sys.exit(0)
    except OSError, e:
        sys.stderr.write("fork #2 failed: %d (%s)\n" % (e.errno, e.strerror))
        sys.exit(1)

    sys.stdout.flush()
    sys.stderr.flush()
    si = file(os.devnull, 'r')
    so = file(os.devnull, 'a+')
    se = file(os.devnull, 'a+', 0)
    os.dup2(si.fileno(), sys.stdin.fileno())
    os.dup2(so.fileno(), sys.stdout.fileno())
    os.dup2(se.fileno(), sys.stderr.fileno())

    atexit.register(del_pid)
    pid = str(os.getpid())
    file(PID_FILE,'w+').write("%s\n" % pid)


def sig_handle_sigint(signo, frame):
    logging.info("sig_handle_sigint %d" %signo)
    sys.exit(0)


def keep_alive():
    user_agent = 'Mozilla/4.0 (compatible; MSIE 5.5; Windows NT)'
    req = urllib2.Request(URL_KODING)
    req.add_header('User-Agent',user_agent)
    response = urllib2.urlopen(req)
    the_page = response.read()
    logging.info(the_page)


def ssh2(ip,username,passwd,cmd):

    try:
        ssh = paramiko.SSHClient()
        ssh.set_missing_host_key_policy(paramiko.AutoAddPolicy())
        ssh.connect(ip,22,username,passwd,timeout=5)
        while True:
            for m in cmd:
                stdin, stdout, stderr = ssh.exec_command(m)
                out = stdout.readlines()
                for line in out:
                    logging.info(line)
            time.sleep(random.randint(1,30))
            logging.info('%s\tOK\n'%(ip))
        ssh.close()
    except :
        logging.info('%s\tError\n'%(ip))

if __name__=='__main__':

    deamon()
    signal.signal(signal.SIGINT, sig_handle_sigint)
    cmd = ['echo hello!', 'ls']#你要执行的命令列表
    username = "2007202759"  #用户名
    passwd = "012"    #密码
    threads = []   #多线程
    logging.info("Begin......")
    for i in range(2):
        a=threading.Thread(target=ssh2,args=(URL_KODING,username,passwd,cmd))
        a.start()
        threads.append(a)

    for thread in threads:
        thread.join()
