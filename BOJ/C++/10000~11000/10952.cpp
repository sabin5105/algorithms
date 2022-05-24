#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {

	int a, b;

	for (;;) {

		scanf("%d %d", &a, &b);

		if ((a == 0) && (b == 0)) {

			break;
		}
		else {

			printf("%d\n", a + b);
		}

	}
}