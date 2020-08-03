import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
x1=0
x2=0
y1=0
y2=0
x_=0
y_=0

a=input()
b=input()
c=input()

x1=int(a.split(" ")[0])
y1=int(a.split(" ")[1])
x2=int(b.split(" ")[0])
y2=int(b.split(" ")[1])
x_=int(c.split(" ")[0])
y_=int(c.split(" ")[1])

if x1<=x_<=x2 and y1<=y_<=y2:
    print("충돌")
else:
    print("비충돌")