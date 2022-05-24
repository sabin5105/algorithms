#include<iostream>
#include<vector>
using namespace std;

const int MAX = 1000000;
int m,n;
int arr[MAX];

void getChe(int num) 
{

	for (int i = 2; i <= num; i++) 
	{
		arr[i] = i;
	}

	for (int i = 2; i <= num; i++) 
	{
		if (arr[i] == 0)
			continue;
		for (int j = i*2; j <= num; j += i) 
		{
				arr[j] = 0;
		}
	}
	for (int i = m; i <= num; i++)
	{
		if (arr[i] != 0)
			cout << arr[i] << " ";
	}
}

int main()
{
	cin >> m >> n;
	getChe(n);
}
