a,b = map(int,input().split())
tmp=input()
arr=[]
for i in range(a):
    arr.append(int(tmp.split(" ")[i]))
for i in range(round(a/b)):
    tmp_arr=[]
    for j in range(b):
        try:
            tmp_arr.append(arr[j])
            del arr[0]
        except IndexError:
            break
    tmp_arr.sort()
    print(tmp_arr[-1], end=" ")
