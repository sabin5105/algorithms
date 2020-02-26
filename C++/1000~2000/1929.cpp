#include<iostream>
#include<vector>
using namespace std;

int m,n;
int* arr;

void getChe(int num) 
{
	arr = (int*)malloc(sizeof(int)*num);

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
