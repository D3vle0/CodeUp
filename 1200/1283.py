a=int(input())
b=int(input())
tmp=input()
arr=[]
first=a
for i in range(b):
    arr.append(int(tmp.split(" ")[i]))
for i in range(b):
    a=a+(a/100)*arr[i]
a=round(a)
print(a-first)
if a-first > 0:
    print("good")
elif a-first == 0:
    print("same")
else:
    print("bad")
