arr=[]
a=input()
for i in range(10):
        arr.append(a.split(" ")[i])
arr.sort()
arr.reverse()
print(arr[2])
