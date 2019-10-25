#include<cstdio>
#pragma warning(disable:4996)

int n, m, c;

int main() {

	scanf("%d%d", &n, &m);

	if (m == 1)n< 0 ? printf("INFINITE\n") : printf("0\n");

	else if (m % 2 == 1)printf("ERROR\n");

	else if (m == 0)n> 0 ? printf("INFINITE\n") : printf("0\n");

	else n> 0 ? c = (n - 1) / (m / 2), printf("%d\n", c) : printf("0\n");

}