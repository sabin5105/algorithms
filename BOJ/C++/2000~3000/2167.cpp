#include<iostream>
#include<string>
#pragma warning(disable:4996)
using namespace std;

//�׳� for������ �ݺ��� ������ ��Ÿ�� �����߻�
//���� ��ȭ�� ��� main �Լ� �ؿ�����

int main()
{
	int n, m, sum=0;
	cin >> n >> m; //n���� �ٰ� m���� ����

	int str[300][300];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> str[i][j];

	int k;		// ����?
	cin >> k;

	int i, j, x, y;
	for (int p = 0; p < k; p++) 
	{
		cin >> i >> j >> x >> y;
		for (int k = i; k <= x; k++)
			for (int l = j; l <= y; l++)
				sum += str[k][l];
		cout << sum << '\n';
		sum = 0;
	}

}
//---------------------------------------
#include <iostream>
using namespace std;

int main() {

	int N, M, K;
	cin >> N >> M;

	int value = 0;
	int dp[301][301] = { 0 }; //(0,0)���� (n,m)������ ��
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++) {
			scanf("%d", &value);
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + value;
		}

	cin >> K;
	int sum = 0;
	int x1, x2, y1, y2;
	for (int testCase = 0; testCase<K; testCase++) {
		scanf("%d %d %d %d", &y1, &x1, &y2, &x2);

		sum = dp[y2][x2] - dp[y2][x1 - 1] - dp[y1 - 1][x2] + dp[y1 - 1][x1 - 1];
		printf("%d\n", sum);
	}

	return 0;
}
