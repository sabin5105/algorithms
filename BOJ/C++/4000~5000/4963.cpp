#include<iostream>
#include<cstring>

using namespace std;

const int MAX = 50;

int w, h;
int map[MAX][MAX];
bool check[MAX][MAX];

typedef struct
{
	int dx, dy;
}dir;

dir direction[8] = { {1,0}, {1,1}, {0,1}, {-1,0}, {-1,-1}, {0,-1}, {1,-1}, {-1,1} };

void island(int y, int x)
{
	if (!map[y][x] || check[y][x])
		return;
	check[y][x] = true;

	for (int i = 0; i < 8; i++)
	{
		int newY = y + direction[i].dy;
		int newX = x + direction[i].dx;
		if (newX >= 0 && newX < w && newY >= 0 && newY < h)
			island(newY, newX);
	}
}

int main()
{
	while (1)
	{
		cin >> w >> h;
		if (w == 0 && h == 0)
			break;
		memset(check, false, sizeof(check));

		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
			{
				cin >> map[i][j];
			}

		int cnt = 0;
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				if (!check[i][j] && map[i][j])
				{
					island(i, j);
					cnt++;
				}
		cout << cnt << endl;
	}
	return 0;
}