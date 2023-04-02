#!/usr/bin/python3
<<<<<<< HEAD

# quick sort 
def partition(arr,low,high):
=======
import math

# quick sort 
def partition(arr, low, high):
>>>>>>> f71656a (stufy python materials)
    i = (low -1)  # the index of the lowest 
    pivot = arr[high]
    
    for j in range(low, high):
        # the current data is lower or equal pivot
        if arr[j] <= pivot:
            i = i + 1
            arr[i],arr[j] = arr[j],arr[i]
    arr[i+1],arr[high] = arr[high],arr[i+1]
    return(i+1)

# arr[] --> 排序数组
# low  --> 起始索引
# high  --> 结束索引
  
# 快速排序函数
def quickSort(arr,low,high): 
    if low < high: 
  
        pi = partition(arr,low,high) 
  
        quickSort(arr, low, pi-1) 
        quickSort(arr, pi+1, high) 
  
arr = [10, 7, 8, 9, 1, 5] 
n = len(arr) 

print('the original array:')
for i in range(n):
    print ("%d" %arr[i],end = ' ')

quickSort(arr,0,n-1) 
print ("\n排序后的数组:") 
for i in range(n): 
    print ("%d" %arr[i],end = ' ')