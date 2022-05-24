#include<iostream>
#include<queue>
#include<vector>
#include<string>
#pragma warning (disable:4996)
using namespace std;
int map[30][30];
bool check[30][30];
int group[900];
int group_cnt=0;
int n;

typedef struct
{
	int dx;
	int dy;
}dir;
dir direction[4] = { {0,1},{1,0},{0,-1},{-1,0}, };

void bfs(int x, int y)
{
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));

	check[x][y] = true;
	group[group_cnt]++;

	while (!q.empty())
	{
		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int dx = x + direction[i].dx;
			int dy = y + direction[i].dy;

			if (dx >= 0 && dx < n && dy >= 0 && dy < n)
			{
				if (map[dx][dy] == 1 && check[dx][dy] == false)
				{
					check[dx][dy] = true;
					group[group_cnt]++;

					q.push(make_pair(dx, dy));
				}
			}
		}
	}

}
int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)	// input
	{
		for (int j = 0; j < n; j++)
			scanf("%1d", &map[i][j]);
	}
	for (int i = 0; i < n; i++)	// check what's gon be into bfs
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == 1 && check[i][j] == false)
			{
				group_cnt++;
				bfs(i, j);
			}
		}
	}
	sort(group + 1, group + group_cnt + 1);
	cout << group_cnt << endl;
	for (int i = 1; i <= group_cnt; i++)
		cout << group[i] << endl;
}