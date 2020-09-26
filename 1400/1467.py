a,b = map(int,input().split())
cnt=a*b-a+1
first_cnt=cnt
for i in range(a):
    for j in range(b):
        print(cnt, end=" ")
        cnt-=a
    first_cnt+=1
    cnt=first_cnt
    print()