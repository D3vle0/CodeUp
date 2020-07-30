cp=input()
for i in cp:
    if i != ' ':
        print(chr((ord(i)-3)), end="")
    else:
        print(" ", end="")