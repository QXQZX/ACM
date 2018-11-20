#!/usr/bin/env python3
#!coding:utf-8
try:
    num = eval(input("请输入一个整数："))
    print(num**2)
except NameError:
    print("这不是一个整数。")
