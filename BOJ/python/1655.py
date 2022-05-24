import sys
import heapq

n = int(sys.stdin.readline())
l_heap = []
r_heap = []
ans = []

for i in range(n):
    x = int(sys.stdin.readline())

    if len(l_heap)==len(r_heap):
        heapq.heappush(l_heap,-x)
    else:
        heapq.heappush(r_heap,x)
    
    if r_heap and -l_heap[0] > r_heap[0]:
        r_value = heapq.heappop(r_heap)
        l_value = heapq.heappop(l_heap)
        heapq.heappush(l_heap,-r_value)
        heapq.heappush(r_heap,-l_value)
    
    ans.append(-l_heap[0])

for i in ans:
    print(i)