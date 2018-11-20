#!/usr/bin/env python3
# coding:utf-8
import time
scale = 10
print("------starting------")
for i in range(scale+1):
    a = '*'*i
    b = '-'*(scale-i)
    c = (i/scale)*100
    print("{:^3.0f}%[{}->{}]".format(c, a, b))
print("------ending------")
