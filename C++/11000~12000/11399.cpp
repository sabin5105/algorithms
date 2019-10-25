#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int p[1001];
	int n;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> p[i];

	sort(p, p + n);

	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++)
			sum += p[j];

	cout << sum;
}