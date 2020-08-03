a=input()
cnt=0
cnt+=a.count('3')
cnt+=a.count('6')
cnt+=a.count('9')
if cnt:
    print('K'*cnt)
else:
    print(a)

