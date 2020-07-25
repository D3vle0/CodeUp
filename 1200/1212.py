a=input()
arr=[]
arr.append(int(a.split(" ")[0]))
arr.append(int(a.split(" ")[1]))
arr.append(int(a.split(" ")[2]))
arr.sort()
if arr[0]+arr[1]>arr[2]:
    print("yes")
else:
    print("no")