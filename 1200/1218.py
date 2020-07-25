import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a=input()
num1=int(a.split(" ")[0])
num2=int(a.split(" ")[1])
num3=int(a.split(" ")[2])

if num1+num2>num3:
    if num1==num2 and num2==num3:
        print("정삼각형")
    elif num1==num2 or num2==num3 or num3==num1:
        print("이등변삼각형")
    elif num1*num1+num2*num2==num3*num3:
        print("직각삼각형")
    else:
        print("삼각형")
else:
    print("삼각형아님")