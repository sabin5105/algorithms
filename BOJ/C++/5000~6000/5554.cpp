#pragma warning(disable:4996)
#include<cstdio>

int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("%d\n", (a + b + c + d)/60);
	printf("%d", (a + b + c + d) % 60);
}