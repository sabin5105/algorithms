#include<iostream>
#include<cmath>
using namespace std;
int n, a, b;

int cal(int a, int b)
{
	int cnt = 1;

	while (n)
	{
		if ((a + 1) / 2 == (b + 1) / 2)
			break;
		a = (a + 1) / 2;
		b = (b + 1) / 2;
		cnt++;
		n /= 2;
	}

	if (!n)
		return -1;
	return cnt;
}
int main()
{
	cin >> n >> a >> b;

	cout << cal(a, b);
}