arr=[]
odd=[]
even=[]
a=input()
for i in range(10):
    arr.append(int(a.split(" ")[i]))
for i in arr:
    if i%2:
        odd.append(i)
    else:
        even.append(i)
odd.sort()
even.sort()
try:
    print(odd[len(odd)-1], end=" ")
except IndexError:
    print("", end="")
try:
    print(even[len(even)-1], end=" ")
except IndexError:
    print("", end="")