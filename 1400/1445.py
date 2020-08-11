arr=[]

a=input()
num1=int(a.split(" ")[0])
num2=int(a.split(" ")[1])
b=input()
for i in range(num1):
    arr.append(int(b.split(" ")[i]))
c=input()
for i in range(num2):
    arr.append(int(c.split(" ")[i]))
arr.sort()
for i in arr:
    print(i, end=" ")