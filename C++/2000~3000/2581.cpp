#pragma warning(disable :4996)
#include <stdio.h>

int testprime(int j)
{
	if (j == 1) {
		return 0;
	}
	for (int i = 2; i < j; i++) {
		if (j%i == 0) {
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n, m,sum=0;
	scanf("%d%d", &n, &m);
	for (int j = n; j < m+1; j++) {
		if (testprime(j) == 1)
			sum += j;
	}
	if (sum == 0) {
		printf("-1");
		return 0;
	}
	printf("%d\n", sum);
	for (int j = n; j < m+1; j++) {
		if (testprime(j) == 1) {
			printf("%d", j);
			break;
		}
	}
}