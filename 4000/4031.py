a=input()
arr=a.split(" ")
odd=[]
even=[]
for i in arr:
    if int(i)%2:
        odd.append(int(i))
    else:
        even.append(int(i))
odd.sort()
even.sort()
if len(odd) == 0 and len(even):
    print(even.pop())
elif len(odd) and len(even) == 0:
    print(odd.pop())
else:
    print(odd.pop()+even.pop())