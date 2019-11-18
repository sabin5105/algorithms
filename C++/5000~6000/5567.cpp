#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int n, m;
vector<int> graph[10001];
int cnt = 0;
bool friendlist[501];

void findFriend(int node)
{
	for (int i = 0; i < graph[node].size(); i++)
	{
			friendlist[graph[node][i]] = true;
	}
	if (node == 1)
	{
		for (int i = 0; i < graph[node].size(); i++)
		{
			findFriend(graph[node][i]);
		}
	}
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int temp_a, temp_b;
		cin >> temp_a >> temp_b;

		graph[temp_a].push_back(temp_b);
		graph[temp_b].push_back(temp_a);
	}

	findFriend(1);
	for (int i = 2; i <= n; i++)
	{
		if (friendlist[i] == true)
			cnt++;
	}
	cout << cnt << endl;
}
