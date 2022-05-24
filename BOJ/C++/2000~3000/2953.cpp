#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[6][6];
	int ans[6];
	int max = 0;
	int real_ans = 0;

	for (int i = 0; i < 5; i++)
	{
		int temp = 0;
		for (int j = 0; j < 4; j++)
		{
			cin >> a[i][j];
			temp += a[i][j];
		}
		ans[i] = temp;
		if (max < ans[i])
		{
			real_ans = i;
			max = ans[i];
		}
	}		
	cout << real_ans+1 << ' ' << max;
}