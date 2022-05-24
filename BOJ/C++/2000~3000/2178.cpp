#pragma warning(disable:4996)
#include<iostream>
#include<cstdio>
#include<queue>

using namespace std;
int n;
int m;
bool map[100][100];
int check[100][100];
int dir[4][2] = {{1,0}, {-1,0},{ 0,1 },{ 0, -1 } };	// R, L, U, D direction

void input()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int b;
			scanf("%1d", &b);
			if (b == 1)
				map[i][j] = true;
		}
	}
}

void output(int num)
{
	printf("%d\n", num);
}

bool isinside(int a, int b)	// »óÀÚ ¾È?
{
	return (a >= 0 && a < n) && (b >= 0 && b < m);
}

int bfs()
{
	int dy = 0, dx = 0;

	queue<pair<int, int>> q;
	q.push(pair<int, int> (dy, dx));
	check[dy][dx] = 1;

	while (!q.empty())
	{
		dy = q.front().first;
		dx = q.front().second;
		q.pop();

		if ((dy == n - 1) && (dx == m - 1)) break;

		for (int i = 0; i < 4; i++)
		{
			int next_y = dy + dir[i][0];
			int next_x = dx + dir[i][1];

			if (isinside(next_y, next_x) && check[next_y][next_x] == 0 && map[next_y][next_x])
			{
				check[next_y][next_x] = check[dy][dx] + 1;
				q.push(pair<int, int>(next_y, next_x));
			}
		}
	}
	return check[n - 1][m - 1];
}
int main()
{
	input();
	output(bfs());
}