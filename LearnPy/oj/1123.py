#!/usr/bin/env python3
#!coding:utf-8
a = int(input())
N = 1
if a == 0:
    print(1)
else:
    for i in range(1, a+1):
        N *= i
    print(N)
