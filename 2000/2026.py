a=int(input(), 16)
tmp=bin(a)[2:]
if len(tmp) % 4 == 0:
    for i in range(len(tmp)):
        print(tmp[i], end="")
        if (i+1) % 4 == 0:
            print(" ", end="")
elif len(tmp) % 4 == 1:
    tmp="0"*3+tmp
    for i in range(len(tmp)):
        print(tmp[i], end="")
        if (i+1) % 4 == 0:
            print(" ", end="")
elif len(tmp) % 4 == 2:
    tmp="0"*2+tmp
    for i in range(len(tmp)):
        print(tmp[i], end="")
        if (i+1) % 4 == 0:
            print(" ", end="")
else:
    tmp="0"+tmp
    for i in range(len(tmp)):
        print(tmp[i], end="")
        if (i+1) % 4 == 0:
            print(" ", end="")