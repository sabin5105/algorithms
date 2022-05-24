#pragma warning(disable:4996)
#include<cstdio>

int main()
{
	int a, b, c, d, max=0;

	for (int i = 0; i < 2; i++) {
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if (a + b + c + d > max)
			max = a + b + c + d;
		
	}
	printf("%d", max);
}