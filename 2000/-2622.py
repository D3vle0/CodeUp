#too long time (error)
num=int(input())
tmp=[]
arr=[]
a=input()
for i in range(num):
    tmp.append(int(a.split(" ")[i]))
arr=tmp[:]
arr.sort()
print("%d : %d\n%d : %d" %(int(tmp.index(arr[num-1])+1), arr[num-1], int(tmp.index(arr[0])+1), arr[0]))