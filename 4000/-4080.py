R=int(input())
now_R=R

arr=[1,5,9]

arr.append(3)
arr.sort()
while(now_R > 0):
    i=len(arr)-1 
    while (i >= 0):
        if now_R - arr[i] >= 0:
            now_R -= arr[i]
            print(arr[i])
            continue
        else:
            i-=1