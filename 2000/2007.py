import sys
n=int(input())
a=input()
arr=[]
tmp=[]
cnt=0
for i in range(n):
    arr.append(int(a.split(" ")[i]))
tmp=arr[::]
tmp.sort()
for i in range(n-1):
    if arr[i] == arr[i+1]:
        cnt+=1
if cnt==len(arr)-1:
    print("섞임")
else:
    if arr==tmp:
        print("오름차순")
        sys.exit(0)
    tmp.reverse()
    if arr==tmp:
        print("내림차순")
    else:
        print("섞임")