#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int main()
{
	int n, a, b, c, d[100], sum, bil;
	double max = 0;
	cin >> n >> a >> b >> c;
	for (int i = 0; i < n; i++)
		cin >> d[i];
	sort(d, d + n, greater<int>());
	bil = a, sum = c, max = (double)c / a;

	for (int i = 0; i < n; i++)
	{
		if ((double)d[i] / b >= max)
			max = (double)((max*bil) + d[i]) / (bil + b), bil += b;
		else
			break;
	}
	cout << (int)max;
}