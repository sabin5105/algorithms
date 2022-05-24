#include <stdio.h>
int main()
{
	int n, cnt = 0;
	scanf("%d", &n);
	for (int i = 1; i*i <= n; ++i) {
		cnt += ((n / i) - (i - 1));
	}
	printf("%d", cnt);

}