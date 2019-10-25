import math
import sys

def decimal(num):
    if num == 1:
        return False
    for i in range(2, int(math.sqrt(num))+1):
        if num / i == 1:
            break
        elif num % i == 0:
            return False
    return True

natural_list = list(range(2, 246912))
decimal_list = []
for i in natural_list:
    if decimal(i) == True:
        decimal_list.append(i)

num = int(sys.stdin.readline())
while num != 0:
    count = 0
    for i in decimal_list:
        if num < i <= num*2:
            count += 1
    print(count)
    num = int(sys.stdin.readline())