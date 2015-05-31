#! /usr/bin/python

import os
import re
import subprocess

res_ifconfig = subprocess.check_output("ifconfig")

str_re = re.compile(r"(\d{1,3}.\d{1,3}.\d{1,3}.\d{1,3})")
res_re = re.search(str_re,res_ifconfig)
res_re = re.findall(str_re,res_ifconfig)

print(res_re.group(0))
