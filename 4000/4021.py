odd=[]
su=0
a=input()
arr=a.split(" ")
for i in arr:
    if int(i)%2:
        odd.append(i)
if len(odd):
    for i in odd:
        su+=int(i)
else:
    su=-1
print(su)

