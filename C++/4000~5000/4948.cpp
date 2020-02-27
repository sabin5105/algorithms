#include<iostream>
#include<vector>
using namespace std;

const int MAX = 1000000;
int m,n;
int arr[MAX];
int cnt = 0;

void getChe(int num) 
{
	cnt = 0;
	for (int i = 2; i <= num; i++) 
	{
		arr[i] = i;
	}

	for (int i = 2; i <= num; i++) 
	{
		if (arr[i] == 0)
			continue;
		for (int j = i+i; j <= num; j += i) 
		{
				arr[j] = 0;
		}
	}
	for (int i = n+1; i <= num; i++)
	{
		if (arr[i] != 0)
			cnt++;
	}
}

int main()
{
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;
		getChe(2*n);
		cout << cnt << endl;
	}
}
