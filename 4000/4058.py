p=input()
for i in range(len(p)):
    print((bin(ord(p[len(p)-1-i])^127)[2:]).rjust(7,'0'))

# python short code rank #1