#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int i, n, j, k;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (k = 1; k < i; k++)
		{

			printf(" ");
		}
		for (j = 0; j <= n - i; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
}