#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int a[8005] = {0, };
	int j, i, n, k, max = -4001, min = 4001, cnt = 0, mid = 0;
	double sum = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++);
	{
		scanf("%d", &k);
		a[4000 + k] += 1;

		max = k > max ? k : max;
		min = k < min ? k : min;
		sum += k;
	}

	for (i = 0; i < 8005; i++)
	{
		cnt += a[i];
		if (cnt >= (1 + n) / 2)
		{
			mid = i - 4000;
			break;
		}
	}


	printf("%.0f\n", sum / n);
	printf("%d\n", mid);
	printf("%d\n", max - min);

}