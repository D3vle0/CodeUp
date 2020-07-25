import math
a=int(input())
b=int(input())
arr=[]
sum=0
for i in range(a,b+1):
    if math.sqrt(i)-int(math.sqrt(i)) == 0:
        arr.append(i)
        sum+=i
print(sum)
print(arr[0])
