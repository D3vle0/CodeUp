import math
a=input()
x=int(a.split(" ")[0])
y=int(a.split(" ")[1])
z=int(a.split(" ")[2])
tmp=math.gcd(x,y)
print(math.gcd(tmp,z))