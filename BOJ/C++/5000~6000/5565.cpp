#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int sum=0,sum_1=0;
	int a[10];
	scanf("%d", &sum);
	
	for (int i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
		sum_1 += a[i];
	}

	printf("%d", sum-sum_1);

}