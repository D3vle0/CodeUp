arr=[]
for i in range(9):
    arr.append(int(input()))
arr_cp=arr
arr_cp.sort()
print(arr_cp[8])
for i in range(9):
    if arr_cp[8] == arr[i]:
        print(i+1)
