import math
a=input()
num=int(a.split(" ")[0])
arr=[]
for i in range(num):
    arr.append(int(a.split(" ")[i+1]))
arr.sort()
arr.reverse()
arr[0], arr[math.floor(num/2)] = arr[math.floor(num/2)], arr[0]
for i in arr:
    print(i, end=" ")
