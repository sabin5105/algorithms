#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n,str[13],sum=1;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		str[i]=i;
	}

	for (int i = 1; i <= n; i++) {
		sum = sum * str[i];
	}
	
	printf("%d", sum);
}