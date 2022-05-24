import sys
import heapq

n = int(input())
heap = []

for i in range(n):
    x = int(sys.stdin.readline())

    if x:
        heapq.heappush(heap, (-x,x))
    else:
        if len(heap) >= 1:
            print(heapq.heappop(heap)[1])
        else:
            print(0)