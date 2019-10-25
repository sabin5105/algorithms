#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int arr[51], n, mul = 1;

	cin >> n;
	for (int i = 1; i < n+1; i++)
		cin >> arr[i];

	sort(arr+1, arr + n+1);
	if (n == 1)
		cout << arr[1] * arr[1];
	else if (n % 2 == 1)
		cout << arr[n / 2 + 1] * arr[n / 2 + 1];
	else
		cout << arr[n / 2] * arr[n / 2 + 1];
}