num=int(input())
a=input()
arr=[]
for i in range(num):
    arr.append(a.split(" ")[i])
for i in range(num):
    print("%d: " %(i+1) , end="")
    for j in range(num):
        if i==j:
            continue
        else:
            if arr[i] > arr[j]:
                print("> ", end="")
            elif arr[i] < arr[j]:
                print("< ", end="")
            else:
                print("= ", end="")
    print("")
