a=int(input())
arr=[]
b=input()
for i in range(a):
    arr.append(int(b.split(" ")[i]))
arr.sort()
print(arr[a-1], arr[0])