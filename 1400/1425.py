a=input()
num=int(a.split(" ")[0])
line=int(a.split(" ")[1])
data=[]

data_raw=input()

for i in range(num):
    data.append(int(data_raw.split(" ")[i]))
data.sort()

for i in range(1, num+1):
    print(data[i-1], end=" ")
    if i%line==0:
        print("")