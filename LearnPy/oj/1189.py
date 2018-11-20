#!/usr/bin/env python3
#!coding:utf-8
num = eval(input())
a = num % 10
b = num//10 % 10
c = num//100
sum = a*100+b*10+c
print(sum)
