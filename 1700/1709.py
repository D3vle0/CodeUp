num=int(input())
a=input()
arr=[]
for i in range(num):
    arr.append(int(a.split(" ")[i]))
arr.sort()
arr.reverse()
for i in arr:
    print (i, end=" ")