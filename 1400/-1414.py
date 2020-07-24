a=input()
a=a.lower()
print(a.count('c'))
if ('ccc' in a):
    print(a.count('cc')+1)
else:
    print(a.count('cc'))