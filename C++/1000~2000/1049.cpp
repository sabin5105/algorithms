#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, m;
	int mul[50];
	int sin[50];

	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> mul[i] >> sin[i];
	sort(mul, mul + m);
	sort(sin, sin + m);

	int min = 1000;
	int sum = 0;
	
	while (n > 0)
	{
		if (n >= 6 && mul[0] < sin[0] * 6)
		{
			n -= 6;
			sum += mul[0];
		}
		else if (n<6 && mul[0] < sin[0] * n)
		{
			sum += mul[0];
			n -= 6;
		}
		else
		{
			sum += sin[0] * n;
			n = 0;
		}
	}
	cout << sum;
}