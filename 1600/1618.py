a=input()
arr=[]
for i in range(3):
    arr.append(int(a.split(" ")[i]))
arr.sort()
for i in arr:
    print(i, end=" ")