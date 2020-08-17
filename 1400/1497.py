num=int(input())
a=input()
arr=[]
data=[]
for i in range(num):
    arr.append(int(a.split(" ")[i]))
for i in range(num):
    if i%2:
        continue
    if arr[i] > arr[i+1]:
        data.append(arr[i])
    else:
        data.append(arr[i+1])
for i in data:
    print(i, end=" ")
