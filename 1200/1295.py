a=input()
for i in range(len(a)):
    if 65<=ord(a[i])<=90:
        print(chr(ord(a[i])+32), end="")
    elif 97<=ord(a[i])<=122:
        print(chr(ord(a[i])-32), end="")
    else:
        print(a[i],end="")