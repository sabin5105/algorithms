#include<iostream>
#include<algorithm>

using namespace std;

int t;
int num[10];

int main()
{
	cin >> t;
	while (t--)
	{
		int	MIN = 101;
		int sum = 0;
		for (int i = 0; i < 7; i++)
		{
			cin >> num[i];
			if (num[i] % 2 == 0)
			{
				sum += num[i];
				MIN = min(MIN, num[i]);
			}
		}
		cout << sum << ' ' <<MIN << endl;
	}
}