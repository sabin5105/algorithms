#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a, b, c, d;
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if (a == 0)
			cnt++;
		if (b == 0)
			cnt++;
		if (c == 0)
			cnt++;
		if (d == 0)
			cnt++;

		if (cnt == 0)
			printf("E\n");
		if (cnt == 1)
			printf("A\n");
		if (cnt == 2)
			printf("B\n");
		if (cnt == 3)
			printf("C\n");
		if (cnt == 4)
			printf("D\n");

		cnt = 0;

	}
}
