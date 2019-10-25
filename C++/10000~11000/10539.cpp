#include<iostream>

using namespace std;
int main()
{
	int n, temp[101], tmp=0;
	int arr[101], ans=0;
	temp[0] = {0};
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		temp[i] = arr[i] * i;
	}
	for (int i = n; i >= 1; i--)
		temp[i] -= temp[i - 1];
	for (int i = 1; i <= n; i++)
		cout << temp[i] << " ";
	return 0;
}