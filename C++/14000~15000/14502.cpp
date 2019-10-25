#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 50;
int map[MAX][MAX];
bool check[MAX][MAX];

typedef struct
{
	int dx, dy;
}dir;

dir direction[8] = { {1,0}, {1,1},{ 0,1 },{ -1,0 },{ -1,-1 },{ 0,-1 },{ 1,-1 },{ -1,1 } };

void play(int y, int x)
{

}

int main()
{
	int w, h;
	cin >> h >> w;

	if (w == 0 && h == 0) return;
	memset(check, false, sizeof(check));

	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
		{
			cin >> map[i][j];
		}

	
}