#include<iostream>
using namespace std;

int main()
{
	int x, y, cnt = 1, cnt1 = 0;
	int ans[101][101];
	char check[101][101];
	cin >> x >> y;
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			ans[i][j] = -1;
	int k;
	for (int i = 0; i < x; i++)
		for(int j = 0; j < y; j++)
			cin >> check[i][j];
	for (int i = 0; i < x; i++) 
	{
		for (int j = y - 1; j >= 0; j--)
		{
			if (check[i][j] == 'c')
			{
				ans[i][j] = 0;
				k = j+1;
				while (k<=y-1) {
					if (check[i][k] == 'c')
						break;
					ans[i][k] = cnt;
					cnt++;
					k++;
				}
				cnt = 1;
			}
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++)
			cout << ans[i][j] << " ";
		cout << "\n";
	}
}