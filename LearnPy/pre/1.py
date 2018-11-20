#!/usr/bin/env python3
# coding:utf-8
weekstr = "星期一星期二星期三星期四星期五星期六星期日"
day = eval(input("请输入一个数字："))
pos = (day-1)*3
print(weekstr[pos:pos+3])
