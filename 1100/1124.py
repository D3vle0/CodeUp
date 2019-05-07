n=input()
n=n.replace("C","")
n=n.replace("H"," ")
print(int(n.split(' ')[0])*12+int(n.split(' ')[1]))