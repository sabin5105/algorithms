#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int n;
	int sum = 0;

	cin >> n;

	int arr[10];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		int rest = arr[i] % 10;
		arr[i] = int(arr[i]/10);
		arr[i] = pow(arr[i], rest);
		sum += arr[i];
	}
	cout << sum;

}