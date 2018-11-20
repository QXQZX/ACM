#!/usr/bin/env python3
#!coding:utf-8
# 函数应用-01


def fact(n):
    if n == 1:
        return 1
    else:
        return n*fact(n-1)


print(fact(3))
