#pragma warning(disable:4996)
#include<cstdio>

int main()
{
	int n, a, b, match;
	scanf("%d%d%d", &n, &a, &b);
	for (int i = 0; i < n; i++) {
		scanf("%d", &match);
		if (match > a&&match > b && match*match>a*a+b*b) {
			printf("NE\n");
		}
		else
			printf("DA\n");
	}
}