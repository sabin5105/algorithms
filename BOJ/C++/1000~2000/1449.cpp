#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n, str;
	cin >> n >> str;
	str = str * 2;

	int arr[2002];
	int store[2002];
	bool check[2002];

	fill(check, check + 2002, false);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		store[i] = 2 * arr[i];
	}

	sort(store, store+n);
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (check[store[i] - 1] == false || check[store[i]] == false || check[store[i] + 1] == false)
		{
			fill(check + (store[i] - 1), check + (store[i] + str), true);
			cnt++;
		}
	}
	cout << cnt;
}