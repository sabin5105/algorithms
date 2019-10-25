#include<iostream>
using namespace std;

int main()
{
	int n, T[15], p[1000], cnt=0;
	cin >> n;
	int sum = 0;

	for (int i = 0; i < n; i++)
		cin >> T[i] >> p[i];

	if (T[n - 1] > 1)
		p[n - 1] = 0;		// 마지막이 2 이상일 때 초기화


}