n=int(input())
a=input()
arr=[]
for i in range(n):
    arr.append(int(a.split(" ")[0]))
sorted_arr = arr[::]
sorted_arr.sort()
for i in range(n):
    for j in range(n):
        if sorted_arr[j] in arr:
            print(arr.index(sorted_arr[j]))
            break