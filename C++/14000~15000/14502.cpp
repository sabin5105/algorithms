#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

typedef struct
{
	int dx;
	int dy;
}dir;
dir direction[4] = { { 0,1 },{ 1,0 },{ 0,-1 },{ -1,0 } };
int n, m;
int arr[10][10];
int temp[10][10];
bool check[10][10];
int cnt = 0;
int result = 0;


void bfs()
{
	int afterarr[10][10];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			afterarr[i][j] = temp[i][j];
	}
	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (afterarr[i][j] == 2)
				q.push(make_pair(i, j));

	while (!q.empty())
	{
		int newX = q.front().second;
		int newY = q.front().first;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = newX + direction[i].dx;
			int ny = newY + direction[i].dy;
			if (nx >= 0 && nx < m && ny >= 0 && ny < n)
			{
				if (afterarr[ny][nx] == 0)
				{
					afterarr[ny][nx] = 2;
					q.push(make_pair(ny, nx));
				}
			}
		}
	}
	int empty = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (afterarr[i][j] == 0)
				empty++;

	result = max(result, empty);
}
void wall(int cnt)
{
	if (cnt == 3)
	{
		bfs();
		return;
	}
	for (int i = 0; i<n; i++)
		for (int j = 0; j<m; j++)
			if (temp[i][j] == 0)
			{
				temp[i][j] = 1;
				wall(cnt + 1);
				temp[i][j] = 0;
			}
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)	// input
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 0)
			{
				for (int k = 0; k < n; k++)
					for (int l = 0; l < m; l++)
						temp[k][l] = arr[k][l];

				temp[i][j] = 1;
				wall(1);
				temp[i][j] = 0;
			}
		}
	cout << result;
}
