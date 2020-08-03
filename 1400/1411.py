num=int(input())
arr=[]
for i in range(num-1):
    arr.append(input())
for i in range(1, num+1):
    if arr.count(str(i)) == 0:
        print(i)
        break