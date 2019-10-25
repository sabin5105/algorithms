#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<string.h>
#include<cstdlib>

using namespace std;
int main()
{
	int n, b[51];
	vector<int> a;

	cin >> n;

	for (int j = 0; j < n; j++)
	{
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	vector<int> New_b;
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
		New_b.push_back(b[i]);
	}

	sort(a.begin(), a.end());
	sort(New_b.begin(), New_b.end());

	//최대에 최소를 맞추는 거
	//next_permutation은 시간초과 (50! 이므로)
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i] * New_b[n-1-i];
	}
	cout << sum;

}