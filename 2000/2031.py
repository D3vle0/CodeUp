a=input()
s=0
for i in range(len(a)):
    s+=26**i*(ord(a[len(a)-1-i])-64)
print(s)