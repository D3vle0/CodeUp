a=input()
yun=0
y=int(a.split(" ")[0])
m=int(a.split(" ")[1])
if y%400==0 or (y%4==0 and y%100!=0):
    yun=1
if m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12:
    print("31")
elif m==2:
    if yun:
        print("29")
    else:
        print("28")
elif m==4 or m==6 or m==9 or m==11:
    print("30")
