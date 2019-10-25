#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int dp[1001][4];
	cin >> n;

	for (int i = 1; i < n + 1; i++)
	{
		int R, G, B;
		cin >> R >> G >> B;
		
		dp[i][1] = min(dp[i - 1][2], dp[i - 1][3]) + R;
		dp[i][2] = min(dp[i - 1][1], dp[i - 1][3]) + G;
		dp[i][3] = min(dp[i - 1][2], dp[i - 1][1]) + B;
	}
	cout << min(dp[n][1], min(dp[n][2], dp[n][3]));
}