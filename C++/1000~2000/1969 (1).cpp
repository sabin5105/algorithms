#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<string> a;

	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		a.push_back(temp);
	}

	sort(a.begin(), a.end());
	
	int min = 10000000;
	int cnt = 0;
	string store;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				if (a[i][k] != a[j][k])
					cnt++;
			}
			if (cnt < min)
				min = cnt;
			cnt = 0;
		}
	}
	cout << min;
}