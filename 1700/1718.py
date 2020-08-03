a=input()
if len(str(a)) == 2:
    print("13")
elif len(str(a)) > 2:
    if a[1] == 'H':
        print("%d" %(12+int(a[2:])))
    elif a[-1] == 'H':
        print("%d" %(int(a[1:].split("H")[0])*12+1))
    else:
        print("%d" %((int(a.split("H")[0][1:]))*12+int(a.split("H")[1])))