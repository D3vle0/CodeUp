cp=input()
if cp[0] == 'O' and cp[len(cp)-1] == 'X':
    i=0
    while(1):
        if i >= len(cp)-2:
            break
        print(chr(int(cp[::-1][1:len(cp)-1][i]+cp[::-1][1:len(cp)-1][i+1],16)), end="")
        i+=2
else:
    print("data error")