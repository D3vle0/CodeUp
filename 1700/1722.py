import math
n=int(input())
sum=0
c=[]
for i in range(n):
    a=input()
    tmp=[]
    tmp.append(int(a.split(" ")[0]))
    tmp.append(int(a.split(" ")[1]))
    c.append(tmp)
for i in range(n-1):
    sum+=math.sqrt(pow((c[i][0]-c[i+1][0]), 2) + pow((c[i][1]-c[i+1][1]), 2));
print("%.2f" % sum)