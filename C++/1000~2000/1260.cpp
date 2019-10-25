#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>
#include<vector>
#define MAX 10000

using namespace std;

void dfs(int start, vector<int> graph[], bool check[]);
void bfs(int start, vector<int> graph[], bool check[]);

int main()
{
	int n, m, start;
	cin >> n >> m >> start;

	vector<int> graph[MAX];
	bool check[MAX];
	fill(check, check + n + 1, false);

	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 0; i < n + 1; i++)
		sort(graph[i].begin(), graph[i].end());

	dfs(start, graph, check);
	cout << "\n";
	fill(check, check + n + 1, false);
	bfs(start, graph, check);
}

void dfs(int start, vector<int> graph[], bool check[])
{
	stack<int> s;
	s.push(start);
	check[start] = true;
	cout << start << ' ';

	while (!s.empty())
	{
		int current_node = s.top();
		s.pop();
		for (int i = 0; i < graph[current_node].size(); i++)
		{
			int next_node = graph[current_node][i];

			if (check[next_node] == false)
			{
				cout << next_node << ' ';
				check[next_node] = true;

				s.push(current_node);
				s.push(next_node);
				break;
			}
		}
	}
}
void bfs(int start, vector<int> graph[], bool check[])
{
	queue<int> q;

	q.push(start);
	check[start] = true;

	while (!q.empty())
	{
		int temp = q.front();
		q.pop();
		cout << temp << ' ';
		for (int i = 0; i < graph[temp].size(); i++)
		{
			int next_node = graph[temp][i];

			if (check[graph[temp][i]] == false)
			{
				q.push(graph[temp][i]);
				check[graph[temp][i]] = true;
			}
		}
	}
}