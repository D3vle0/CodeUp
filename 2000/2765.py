a=set()
b=set()
num1=int(input())
tmp1=input()
for i in range(num1):
    a.add(int(tmp1.split(" ")[i]))
num2=int(input())
tmp2=input()
for i in range(num2):
    b.add(int(tmp2.split(" ")[i]))
res1=sorted(a&b)
res2=sorted(a|b)
if res1 == []:
    print("0")
else:
    for i in res1:
        print(i, end=" ")   
    print()
for i in res2:
    print(i, end=" ")