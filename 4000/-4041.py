a=input()
sum=0
for i in a[::-1]:
    if i!='0':
        print(i, end="")
    else:
        break
print("")
for i in a:
    sum+=int(i)
print(sum)