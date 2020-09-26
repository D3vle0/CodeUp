a=input()
for i in a:
    if chr(ord(i)+3) != '#':
        if ord(i)<=122 and ord(i)>=120:
            print(chr(ord(i)-23), end="")
        else:
            print(chr(ord(i)+3), end="")
    
    else:
        print(" ", end="")