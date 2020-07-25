num=int(input())
a=input()
data=a.split(" ")
data = list(map(int, data))
data.sort()
data.reverse()
for i in data:
    print(i, end=" ")