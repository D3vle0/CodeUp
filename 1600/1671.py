a=input()
me=int(a.split(" ")[0])
pc=int(a.split(" ")[1])

if me == pc:
    print("tie")
else:
    if me==0 and pc==1:
        print("win")
    elif me==0 and pc==2:
        print("lose")
    elif me==1 and pc==0:
        print("lose")
    elif me==1 and pc==2:
        print("win")
    elif me==2 and pc==0:
        print("win")
    else:
        print("lose")