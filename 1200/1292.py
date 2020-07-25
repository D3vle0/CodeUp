a=int(input())
a=str(a)
su=0
for i in a:
    su+=int(i)
if su%7==4:
    print("suspect")
else:
    print("citizen")