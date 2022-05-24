#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	int cnt = 0;
	if (k == 0)
	{
		cout << min(n / 2, m);
		return 0;
	}
	while (cnt != k)
	{
		int T_max = max(n / 2, m);
		if (T_max == n / 2)
		{
			n--;
			cnt++;
		}
		else
		{
			m--;
			cnt++;
		}
	}
	cout << min(n / 2, m);
}