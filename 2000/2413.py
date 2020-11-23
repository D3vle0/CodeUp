n=int(input())
data=[]
sum=0
for i in range(n):
    data.append(input())
    sum+=data[i].count(",")-2
print("%.2f" %(sum/n))