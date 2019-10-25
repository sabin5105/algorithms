#include<iostream>

using namespace std;
#define MAX 100000

int input[MAX], out[MAX];
int n,m;

int main()
{
	int n, m;
	cin >> n >> m;
	int in_turnnel = m;

	for (int i = 0; i < n; i++)
		cin >> input[i] >> out[i];

	int cnt = 0;

	for(int i=0;i<n;i++)
	{
		if (in_turnnel < 0)
		{
			cout << "0";
			return 0;
		}
	
		in_turnnel = in_turnnel + input[i] - out[i];

		if (in_turnnel > cnt)
			cnt = in_turnnel;

	}
	cout << cnt;
}