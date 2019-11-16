#include<iostream>
#include<algorithm>
using namespace std;

int n, k, ans, a, b, c;
int arr[1005][4];

int main()
{
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
			if (arr[i][0] == k)
			{
				a = arr[i][1];
				b = arr[i][2];
				c = arr[i][3];
			}
		}
	}

	ans = 1;
	for (int i = 1; i <= n; i++)
	{
		if (arr[i][1] > a) ans++;
		else if (arr[i][1] == a && arr[i][2] > b) ans++;
		else if (arr[i][1] == a && arr[i][2] == b && arr[i][3] > c) ans++;
	}
	cout << ans;
		
}
