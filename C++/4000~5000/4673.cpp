#include<iostream>
#include<cmath>
using namespace std;

long int arr[10002];
void selfnumber(int n)
{
	if (n > 10000)
		return;

	int log_n = log10(n);
	int temp_n = n;
	int index = n;

	for (int i = log_n; i >= 0; i--)
	{
		index += temp_n / (int)pow(10, i);
		temp_n = temp_n % (int)pow(10, i);
	}
	arr[index] = 1;
	selfnumber(n+1);
}

int main()
{
	fill(arr, arr + 10001, 0);
	selfnumber(1);

	cout << 1 << endl;
	for (int i = 2; i <= 10000; i++)
		if (arr[i] == 0)
			cout << i << endl;
}
