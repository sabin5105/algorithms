#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	cin >> a;
	int sum = 0;
	int cnt = 1;
	int realsum = 0;

	for (int i = a.length()-1; i >= 0; i--)
	{
		if (a[i] == 43)	// +
		{
			cnt = 1;
			continue;
		}
		else if (a[i] == 45)	// -
		{
			cnt = 1;
			realsum += sum*(-1);
			sum = 0;
			continue;
		}
		else
		{
			int temp = a[i] - '0';
			sum += (temp*cnt);
		}
		if (cnt < 0)
		{
			cnt *= -1;
		}
		cnt *= 10;
	}
	realsum += sum;

	cout << realsum;
}