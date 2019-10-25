#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int i, n, sum=0;

	scanf("%d", &n);
	
	for (i = 1; i <= n ; i++);
		sum += i;
	printf("%d\n", sum);
	return 0;
}
/*
#include <stdio.h>
int main(void)
{
	int n, i, sum = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		sum += i;
	printf("%d\n", sum);
}*/