#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue<int> dec;
	int n;
	int cnt = 0;
	int i, j, temp;

	cin >> n;
	if (n <= 10)
		cout << n << endl;

	else if (n == 1022)
		cout << 9876543210 << endl;
	else if (n > 1022)
		cout << -1 << endl;

	else
	{
		for (i = 1; i < 10; i++)
		{
			dec.push(i);
			cnt++;
		}
		while (cnt < n)
		{
			i = dec.front();
			dec.pop();

			temp = i % 10;
			for (j = 0; j < temp; j++)		// 10 ������ ��� �ݺ�, �� �ڸ��� ���ڸ����� �׻� Ŭ �� �ۿ� ����
			{
				dec.push(i * 10 + j);
				cnt++;
				if (cnt == n)
				{
					cout << i * 10 + j << endl;
					break;
				}
			}
		}
	}
}