from collections import deque
import sys

n, m, v = map(int, sys.stdin.readline().split())
graph = [[0]*(n+1) for _ in range(m)]

for i in range(m):
    x,y = map(int,sys.stdin.readline().split())
    graph[x][y] = graph[y][x] = 1


def BFS(node):
    visited = [node]
    queue = deque([node])

    while queue:
        n = queue.popleft()
        print(n,end=' ')
        for i in range(len(graph[node])):
            if graph[n][i] == 1 and (i not in visited):
                queue.append(i)
                visited.append(i)
        
def DFS(node, visited=[]):
    visited.append(node)
    print(node, end=' ')

    for i in range(len(graph[node])):
        if graph[node][i] == 1 and (i not in visited):
            DFS(i,visited)

DFS(v)
print()
BFS(v)
