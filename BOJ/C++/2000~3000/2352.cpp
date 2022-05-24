#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int store[40001];
	int cache[40001];
	int size;

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> store[i];

	cache[1] = store[1]; size = 1;
	for (int i = 2; i <= n; i++)
	{
		if (cache[size] < store[i])
		{
			size++;
			cache[size] = store[i];
			continue;
		}
		int temp = lower_bound(cache + 1, cache + 1 + size, store[i]) - cache;
		cache[temp] = store[i];
	}
	cout << size;
}