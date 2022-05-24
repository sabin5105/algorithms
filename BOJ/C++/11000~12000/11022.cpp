#pragma warning(disable :4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int n,a,b;

	scanf("%d", &n);
	for (int i = 1; i < n+1; i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n",i, a, b, a + b);
	}
	return 0;
}