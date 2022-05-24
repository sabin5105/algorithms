a,b,c = int(input()), int(input()), int(input())

mul = list(str(a*b*c))
for i in mul:
    print(mul.count(str(i)))