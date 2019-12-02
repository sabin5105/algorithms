#include<iostream>
using namespace std;

#define MAX 10003
int primenumber[MAX];
bool c[10001];

int NumberOfPrime(int n)
{
	int cnt = 0;
	for (int i = 0; i <= n; i++)
	{
		if (primenumber[i] >= n)
		{
			return cnt;
		}
		cnt++;
	}
}
void making()
{
	int cnt = 0;
	for (int i = 2; i <= 10000; i++)
	{
		if (c[i] == false)
		{
			primenumber[cnt] = i;
			cnt++;
			for (int j = i + i; j <= 10000; j += i)
			{
				c[j] = true;
			}
		}
	}
}
int main()
{
	making();

	int t;
	cin >> t;
	do
	{
		t--;
		int n, ans = MAX, ans_i = 0, ans_j = 0;
		cin >> n;


		int NOP = NumberOfPrime(n);
		for (int i = 0; i <= NOP; i++)
		{
			if (primenumber[i] == false) continue;
			else
			{
				int sum = primenumber[i];
				for (int j = i; j <= NOP; j++)
				{
					if (primenumber[j] == false) continue;
					else
					{
						if (sum + primenumber[j] == n)
						{
							if (ans > abs(j - i))
							{
								ans = abs(j - i);
								ans_i = primenumber[i];
								ans_j = primenumber[j];
							}
							break;
						}
					}
				}
			}
		}
		printf("%d %d\n", ans_i, ans_j);
	} while (t);
}