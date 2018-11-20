#!/usr/bin/env python3
import re
str = "hello"
a = re.search('l', str)  # 返回‘l’在字符串中的位置
b = re.findall('l', str)  # 将字符串中"l'找出来返回列表
c = re.sub('l', 'm', str)  # 将字符串中‘l’换成'm'返回新的字符串
print(a)
print(b)
print(c)
