import math
x,y,z=input().split()
print(math.gcd(math.gcd(int(x),int(y)),int(z)))
