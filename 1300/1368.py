tmp=input()
a=int(tmp.split(" ")[0])
b=int(tmp.split(" ")[1])
s=tmp.split(" ")[2]
space=0
if s=='R':
    space=a
    for i in range(a):
        space-=1
        print(" "*space + "*"*b)
else:
    for i in range(a):
        print(" "*space + "*"*b)
        space+=1