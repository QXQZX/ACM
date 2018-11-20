#!/usr/bin/env python3
#!coding:utf-8
import time
a = 50
print("执行开始".center(a//2, "-"))
start = time.perf_counter()
for i in range(a+1):
    b = "*"*i
    c = '.'*(a-i)
    d = (i/a)*100
    end = time.perf_counter()-start
    print("\r{:>3.0f}%[{}->{}]{:.2f}s".format(d, a, b, end), end=" ")
    time.sleep(0.1)
print('\n'+"执行结束".center(a//2, "-"))
