import sys
import heapq

n = int(sys.stdin.readline())
heap = []

for _ in range(n):
    x = int(sys.stdin.readline())
    if x:
        heapq.heappush(heap,x)
    else:
        if len(heap)==0:
            print(0)
            continue
        print(heapq.heappop(heap))