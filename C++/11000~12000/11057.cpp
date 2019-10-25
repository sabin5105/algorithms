#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << '10' << endl;
		return 0;
	}

	int cnt = 0;
	n = pow(10,n-1);
	for  (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}