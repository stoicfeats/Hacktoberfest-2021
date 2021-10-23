# -*- coding: utf-8 -*-
"""
Created on Fri Apr 23 07:56:29 2021
 
@author: Nikhil Singh
"""
#1st line for taking input for the weight of the watermelon.
w=int(input())
#Asserting limit on input value of w.
1<=w<=100
#Output part
if w%2 == 0:
    if w>2:
        print('YES')
    else:
        print('NO')
else:
    print('NO')
