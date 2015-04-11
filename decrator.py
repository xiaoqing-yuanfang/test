#!/usr/bin/python
#-*-coding:utf8-*-

nihao = "你好"

def my_wrapper(func):
    def _my_wrapper(*args,**kwargs):
        value = func(*args,**kwargs)
        return value**2
    return _my_wrapper

@my_wrapper
def add(a,b):
    return a+b

if __name__ == "__main__":
    print(add(3,4))
