#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	unsigned int a, b;
	for (;;) {
		scanf("%d%d", &a, &b);
		if (a == 0 && b == 0)
			break;
		else
		printf("%d %d / %d\n", a/b, a%b, b);

	}
}