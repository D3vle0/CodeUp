a=input()
arr=[]
for i in range(10):
    arr.append(int(a.split(" ")[i]))
data=[]
for i in arr:
    sum=0
    tmp=str(i)
    for j in tmp:
        sum+=int(j)
    data.append(sum)
data.sort()
print(data[9], data[0])