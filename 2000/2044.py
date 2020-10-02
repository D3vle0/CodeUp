a=input()
s=[]
for i in a:
    if i=='0' or i=='1' or i=='2':
        s.append(i)
    elif i=='A':
        del s[len(s)-1]
    elif i=='B':
        del s[len(s)-1]
        del s[len(s)-1]
    elif i=='C':
        s=[]
for i in s:
    print(i,end="")