a=input()
x=int(a.split(" ")[0])
y=int(a.split(" ")[1])
print("0"*10 if x%y==0 else str(x//y-x/y)[3:13])