a=input()
arr=a.split(" ")
sort_=[]
for i in arr:
    sort_.append(int(i))
sort_.sort()
print(sort_[2])