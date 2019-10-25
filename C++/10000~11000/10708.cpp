#include<iostream>

using namespace std;
int main()
{
	int n, m, target[100], friends[100][100], cnt[100] = { 0 };
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> target[i];
	for (int i = 0; i < m; i++) {			// 게임횟수 i
		for (int j = 0; j < n; j++) {		//  친구 수 j
			cin >> friends[i][j];
			if (friends[i][j] == target[i])
				cnt[j]++;
			else
				cnt[target[i]-1]++;
		}
	}
	for (int i = 0; i < n; i++)
		cout << cnt[i] << "\n";

}