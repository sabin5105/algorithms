from pickle import TRUE
import sys
from collections import Counter


n = int(input())
numbers=[]
for _ in range(n):
    numbers.append(int(sys.stdin.readline()))

numbers.sort()

print(round(sum(numbers)/n))
print(numbers[int((n-1)/2)])
RANGE = numbers[n-1]-numbers[0]

TRIGER = False
if n == 1: 
    print(numbers[0])
    TRIGER = True

if TRIGER == False:
    c=Counter(numbers).most_common(2)
    if c[0][1] == c[1][1] :
        print(c[1][0])
    else:
        print(c[0][0])

print(RANGE)
