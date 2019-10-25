#include<iostream>
using namespace std;

int main()
{
	int n, f, i;

	cin >> n >> f;
	n = (n / 100) * 100;

	int temp;
	for (i=n; i < n+100; i++)
	{
		if (i % f == 0)
		{
			n = i % 100;
			break;
		}
	}

	if (n < 10)
		cout << 0 << n;
	else
		cout << n;

}