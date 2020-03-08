#include<iostream>
#include<string.h>
#include<stack>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;
#define MAX 10001

int n, m, v;
vector<int> graph[MAX];
bool check[MAX];

void dfs()
{
	stack<int> s;
	s.push(v);
	check[v] = true;
	cout << v << ' ';

	while (!s.empty())
	{
		int temp = s.top();
		s.pop();
		for (int i = 0; i < graph[temp].size(); i++)
		{
			int new_temp = graph[temp][i];

			if (check[new_temp] == false)
			{
				cout << new_temp << ' ';
				check[new_temp] = true;

				s.push(temp);
				s.push(new_temp);
				break;
			}
		}
	}
}
void bfs()
{
	queue<int> q;
	q.push(v);
	check[v] = true;

	while (!q.empty())
	{
		int temp = q.front();
		q.pop();
		cout << temp << ' ';
		for (int i = 0; i < graph[temp].size(); i++)
		{
			int new_temp = graph[temp][i];
			if (check[new_temp] == false)
			{
				q.push(new_temp);
				check[new_temp] = true;
			}
		}
	}
}
int main()
{
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++)
	{
		int temp1, temp2;
		cin >> temp1 >> temp2;

		graph[temp1].push_back(temp2);
		graph[temp2].push_back(temp1);
	}
	for (int i = 0; i < n + 1; i++)
		sort(graph[i].begin(), graph[i].end());

	dfs();
	cout << '\n';
	memset(check, false, sizeof(check));
	bfs();
	
}
