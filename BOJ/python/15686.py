from itertools import combinations
import sys

n , m = map(int,sys.stdin.readline().split())
city = list(list(map(int, input().split())) for _ in range(n))

MIN = 10000000
house = []
store = []

for i in range(n):
    for j in range(n):
        if city[i][j] == 1:
            house.append([i, j])
        elif city[i][j] == 2:
            store.append([i, j])

for c in combinations(store,m):
    temp = 0
    for h in house: 
        len = 1000
        for j in range(m):
            len = min(len, abs(h[0] - c[j][0]) + abs(h[1] - c[j][1]))
        temp += len
    MIN = min(MIN, temp)

print(MIN)