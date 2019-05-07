a=input()
a=int((a[1]+a[0]))
a=a*2
if a>=100:
    a-=100
print(a)
if a<=50:
    print('GOOD')
elif a>50:
    print('OH MY GOD')