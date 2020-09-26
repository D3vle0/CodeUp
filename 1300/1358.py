a=int(input())
space=a//2
star=1
for i in range(a//2+1):
    print(" "*space, end="")
    print("*"*star)
    space-=1
    star+=2
