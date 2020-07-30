a=input()
x=int(a.split(" ")[0])
y=int(a.split(" ")[1])
cnt=0
for i in range(x, y+1):
    cnt+=str(i).count("1")
print(cnt)