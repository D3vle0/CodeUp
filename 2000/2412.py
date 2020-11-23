n=int(input())
sum=0
for i in range(n):
    sum+=int(input().split(",")[2])
print("%.2f"%(sum/n))