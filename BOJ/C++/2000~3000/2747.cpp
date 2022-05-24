#pragma warning(disable:4996)
#include <stdio.h>

int main() 
{
	long long  str[92];
	int n;

	scanf("%d", &n);
	str[0] = 0;
	str[1] = 1;
	for (int i = 2; i <= n; i++) {
		
		str[i] = str[i - 2] + str[i - 1];
	}

	printf("%lld", str[n]);

}