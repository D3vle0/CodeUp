odd=[]
odd_sum=0
for i in range(7):
    a=int(input())
    if a%2:
        odd.append(a)
odd.sort()
for i in odd:
    odd_sum+=i
print(odd_sum)
print(odd[0])
