n=int(input())
sum=0
data=[]
for i in range(n):
    data.append(input())
search=input()
for i in data:
    if search == i.split(",")[0]:
        print(*i.split(",")[3:], sep="\n")