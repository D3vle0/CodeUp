a,b=input().split()
a=int(a)
b=int(b)
arr=[]
arr.append(a+b)
arr.append(a-b)
arr.append(a*b)
arr.sort()
print(arr[1])