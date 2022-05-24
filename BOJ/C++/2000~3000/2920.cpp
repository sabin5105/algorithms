#pragma warning (disable:4996)
#include <stdio.h>

int main() {
	int  b=0, c=0;
	char a[100] = { 0 };

	for (int i = 0; i < 8; i++) {
		scanf("%d", &a[i]);

		if (i + 1 == a[i])
		{
			b++;
		}
		else if (8 - i == a[i])
		{
			c++;
		}
	}
	if (b == 8)
		printf("ascending");

	if (c == 8)
		printf("descending");

	else if (b != 8 && c != 8)
		printf("mixed");

	return 0;
}