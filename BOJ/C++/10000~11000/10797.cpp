#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n;
	int a, b,j=0,cnt =0;
	scanf("%d", &n);

	a = (n % 100) / 10;
	b = (n % 10);

	for (int i = 0; i < 5; i++) {
		scanf("%d", &j);
		if (b == j)
			cnt++;
	}
	printf("%d", cnt);
}