#include <iostream>
#include <cstring>

using namespace std;

#define MAX 20
int N;
int graph[MAX][MAX];
int road[MAX][MAX];
int result;

void floyd(void)
{
	for (int k = 0; k < N; k++)
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
			{
				if (i == j || j == k || i == k)
					continue;

				else if (graph[i][j] > graph[i][k] + graph[k][j])
				{
					result = -1;
					return;
				}
				else if (graph[i][j] == graph[i][k] + graph[k][j])
					road[i][j] = false;
			}
}

int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> graph[i][j];

	memset(road, true, sizeof(road));
	floyd();

	if (result != -1)
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				if (road[i][j])
					result += graph[i][j];
	if (result == -1)
		cout << -1 << endl;
	else
		cout << result / 2 << endl;
}