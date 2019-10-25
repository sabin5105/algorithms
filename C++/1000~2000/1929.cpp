#pragma warning(disable :4996)
#include <stdio.h>

int main()
{
	int i, j, m, n, a[100001] = { 0,1 };
	scanf("%d", &m, &n);

	for (i = 2; i <= n; i++)
		for (j = 2; i*j <= n; j++)
			a[i*j] = 1;

	for (i = m; i <= n; i++)
		if (a[i]!=1) 
			printf("%d\n", i);

}