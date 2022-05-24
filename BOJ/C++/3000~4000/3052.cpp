#include<iostream>

using namespace std;

int main()
{
	int arr[11];
	bool check[42] = { false };

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		int temp = arr[i] % 42;
		check[temp] = true;
	}

	int cnt = 0;

	for (int i = 0; i < 42; i++)
	{
		if (check[i] == true)
			cnt++;
	}
	cout << cnt;
}