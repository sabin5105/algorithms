import sys
input = sys.stdin.readline

n,m = map(int,input().split())
graph = []
visited = [[0] * m for _ in range(n)]
r,c,d = map(int,input().split())

dx = [-1,0,1,0]
dy = [0,1,0,-1]

for _ in range(n):
    graph.append(list(map(int,input().split())))

visited[r][c] = 1
cnt = 1

while True:
    flag = 0
    for _ in range(4):
        nx = r + dx[(d+3)%4]
        ny = c + dy[(d+3)%4]
        d = (d+3)%4
        if 0 <= nx < n and 0 <= ny < m and graph[nx][ny] == 0:
            if visited[nx][ny] == 0:
                visited[nx][ny] = 1
                cnt += 1
                r = nx
                c = ny
                flag = 1
                break

    if flag == 0:
        if graph[r-dx[d]][c-dy[d]] == 1:
            print(cnt)
            break
        else:
            r,c = r-dx[d],c-dy[d]