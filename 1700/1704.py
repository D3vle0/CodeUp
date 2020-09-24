a=input()
s1=a.split(" ")[0]
s2=a.split(" ")[1]

tmp=int(s1[0]+s1[1])

if s2[0] == '1' or s2[0] == '2':
    age=2012-(1900+tmp-1)
else:
    age=2012-(2000+tmp-1)
print(age, end=" ")

print("M" if int(s2[0])%2 else "F")