n=int(input())
timeline=[]
for i in range(n):
    timeline.append(input())
print(timeline)
for i in range(n):
    print("%d %s : %d" %(i+1, timeline[0], timeline.count(timeline[0])))
    for j in range(timeline.count(timeline[i])):
        timeline.remove(timeline[i])