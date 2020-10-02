n=int(input())
t=input()
arr=[]
for i in range(n):
    arr.append(float(t.split(" ")[i]))
for i in range(len(arr)-1):
    if arr[i] >= 33 and arr[i+1] >= 33:
        a="yellow"
    elif arr[i] >= 35 and arr[i+1] >= 35:
        a="red"
    else:
        a="green"
arr.sort()
print(arr[len(arr)-1])
print(a)