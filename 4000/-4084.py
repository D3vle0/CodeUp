cp=input()
if cp[0] == 'O' and cp[len(cp)-1] == 'X':
    rev=cp[::-1]
    for i in range(1, len(cp)-2):
        print(chr(int(rev[i]+rev[i+1],16)), end=" ")