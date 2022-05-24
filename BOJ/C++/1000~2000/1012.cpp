#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#define MAX 2501
using namespace std;

int T;
int m, n, k;
int map[MAX][MAX];
bool check[MAX][MAX];
int cnt = 0;

typedef struct
{
	int dx;
	int dy;
}dir;
dir direction[4] = { {0,1}, {1,0}, {0,-1}, {-1,0} };

void bfs(int x, int y)
{
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	check[x][y] = true;

	while (!q.empty())
	{
		int dx = q.front().first;
		int dy = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = dx + direction[i].dx;
			int ny = dy + direction[i].dy;
			if (nx >= 0 && nx < n && ny >= 0 && ny < m)
			{
				if (!check[nx][ny] && map[nx][ny] == 1)
				{
					check[nx][ny] = true;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
}

int main()
{
	cin >> T;
	for (int j = 0; j < T; j++)
	{

		cin >> n >> m >> k;
		for (int i = 0; i < k; i++)
		{
			int temp_x, temp_y;
			cin >> temp_x >> temp_y;
			map[temp_x][temp_y] = 1;
		}

		for (int i = 0; i < n; i++)
			for (int k = 0; k < m; k++)
				if (map[i][k] == 1 && check[i][k] == false)
				{
					bfs(i, k);
					cnt++;
				}
		cout << cnt << endl;

		memset(map, 0, sizeof(map));	// reset
		memset(check, 0, sizeof(check));
		cnt = 0;
	}
}