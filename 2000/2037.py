n=int(input())
arr=[]
for i in range(n,1001):
    if i//n==1:
        arr.append(i)
    else:
        break
arr.sort()
print('{', end="")
for i in range(len(arr)):
    if i==len(arr)-1:
        print(arr[i], end="}")
    else:
        print(arr[i], end=", ")