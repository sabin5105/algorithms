#include<cstdio>
#pragma warning(disable:4996)

int main()
{
	int ans1 = 0, ans2 = 0;
	int a, b, n, a1=0,b1=0;
	scanf("%d%d", &a, &b);
	a1 = a, b1 = b;
	while (1) {
		n = a % b;
		if (n == 0) {
			ans1 = b;
			break;
		}
		a = b;
		b = n;
	}
	ans2 = a1 * b1 / ans1;
	printf("%d\n", ans1);
	printf("%d\n", ans2);
}