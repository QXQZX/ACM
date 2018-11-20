#!/usr/bin/env python3
#!coding:utf-8
height, weight = eval(input("身高体重："))  # 能实现逗号隔开
# 因为  去掉两个引号之后就变成了两个数字以逗号隔开的字符串 正好附给两个变量
# a, b= map(int, input().split())   实现空格隔开
BMI = weight/pow(height, 2)
print("{:.2f}".format(BMI))
