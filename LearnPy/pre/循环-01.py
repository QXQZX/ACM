#!/usr/bin/env python3
#!coding:utf-8
for i in "python233":
    print(i, end=' ')  # 默认是换行，也可用参数end=''进行修改
print('\n')
# range(M,N,K)参数M=表示开始  N表示结束  K表示跨度
for i in range(1, 6):
    print(i, end=' ')
print('\n')
for i in range(1, 6, 2):  # 将 range函数中的数赋值给i
    print(i, end=' ')
print('\n') 