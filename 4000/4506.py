import math
a=input()
x=int(a.split(" ")[0])
y=int(a.split(" ")[1])

def lcm (a,b):
    return a*b // math.gcd(x,y)

print(math.gcd(x,y))
print(lcm(x,y))