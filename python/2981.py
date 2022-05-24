import sys
from math import gcd

n = int(sys.stdin.readline())
numbers = []
for _ in range(n):
    numbers.append(int(sys.stdin.readline()))
numbers.sort()

temp = [numbers[i] - numbers[i - 1] for i in range(1, n)]
my_gcd = temp[0]

for i in range(1, n - 1):
    my_gcd = gcd(my_gcd, temp[i])

result = []
for i in range(1, int(pow(my_gcd, 1 / 2)) + 1):

    if my_gcd % i == 0:
        if i ** 2 == my_gcd:
            result.append(i)
        else:
            result += [i, my_gcd // i]
result.remove(1)
result.sort()

for i in range(len(result)):
    print(result[i], end=" ")