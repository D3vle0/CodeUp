n=int(input())
m=0
f=0
for i in range(n):
    if input().split(",")[1]=="M":
        m+=1    
    else:
        f+=1
print(m)
print(f)