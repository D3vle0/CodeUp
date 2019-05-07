age=int(input())
year=2012-age+1
if year<2000:
    year-=1900
    num=1
else:
    year-=2000
    num=3
 
print(year)
print(num)