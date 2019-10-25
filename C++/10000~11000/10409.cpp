#include<iostream>
using namespace std;

int main()
{
	int n, T, lar = 0, cnt = 0, arr[50], sum = 0;
	cin >> n >> T;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
		if (sum <= T)
			cnt++;
		else if(sum > T)
			break;
	}
	cout << cnt << endl;
}