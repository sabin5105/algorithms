import sys

a,b,c = map(int,sys.stdin.readline().split()) # a = list
# 10 11 12

def mul(a,b):
    if b==1:
        return a%c
    else:
        temp = mul(a,b//2)
        if b % 2 == 0:
            # 짝수
            return (temp * temp) % c
        else:
            # 홀수
            return (temp * temp * a) % c

print(mul(a,b))