#!/usr/bin/env python3
# coding:utf-8
import time
for i in range(101):
    print("\r{:2}%".format(i), end="")  # \r代表回到初始位置 end=""表示输出后不换行
    time.sleep(0.1)
