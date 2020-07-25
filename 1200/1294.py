a=input()
for i in a:
    if chr(ord(i)+3) != '#':
        print(chr(ord(i)+3), end="")
    else:
        print(" ", end="")