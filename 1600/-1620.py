a=input()
sum=0
for i in a:
    sum+=int(i)
while 1:
    if len(str(sum)) == 1:
        break
    for i in str(sum):
        sum+=int(i)
print(int(sum))