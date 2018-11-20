#!/usr/bin/env python3
#!coding:utf-8
n = int(input())
t = 2
for i in range(2, n+1):
    if n % i == 0:
        t = i
        break
if t == n:
    print("This is a prime.")
else:
    print("This is not a prime.")
