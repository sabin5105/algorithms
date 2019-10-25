#pragma warning (disable : 4996)
#include <stdio.h>

int main()

{

	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++)
	{
		int n, score[1005], sum = 0, over_cnt = 0;
		double ave = 0;

		scanf("%d", &n);

		for (int i = 0; i <n; ++i)
		{
			scanf("%d", &score[i]);
			sum += score[i];

		}

		ave = (double) sum /(double) n;

		for (int i = 0; i <n; ++i)
		{
			if (score[i] > ave)
			{
				over_cnt++;
			}
		}
		printf("%.3f%%\n", 100 * (double) over_cnt / (double)n);
	}
}