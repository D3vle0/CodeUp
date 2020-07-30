n=input()
sum=int(n)+int(n[::-1])
if str(sum) == str(sum)[::-1]:
    print("YES")
else:
    print("NO")
