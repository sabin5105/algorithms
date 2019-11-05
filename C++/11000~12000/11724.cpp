#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int cnt = 0;
#define MAX 1001

int m, n;
vector<int> graph[MAX];
bool check[MAX];

void dfs(int node)
{
	check[node] = true;

	for (int i = 0; i < graph[node].size(); i++)
	{
		int next = graph[node][i];
		if (!check[next])
			dfs(next);
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int node1, node2;
		cin >> node1 >> node2;
		graph[node1].push_back(node2);
		graph[node2].push_back(node1);
	}

	for (int i = 1; i <= n; i++)
	{
		if (!check[i])
		{
			dfs(i);
			cnt++;
		}
	}
	cout << cnt;
}