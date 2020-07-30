import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a=input()
n=int(a.split(" ")[0])
k=int(a.split(" ")[1])
for i in range(1, (n//k)+1):
    if len(str(i)) == 1:
        print("F-000%d" %i)
    elif len(str(i)) == 2:
        print("F-00%d" %i)
    elif len(str(i)) == 3:
        print("F-0%d" %i)
    else:
        if i > 9999:
            print("번호 초과 오류")
            break
        else:
            print("F-%d" %i)