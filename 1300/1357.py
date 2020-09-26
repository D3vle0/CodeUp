a=int(input())
cnt=a
for i in range(a):
    print("*"*(i+1))
while (cnt > 0):
    print("*"*(cnt-1))
    cnt-=1