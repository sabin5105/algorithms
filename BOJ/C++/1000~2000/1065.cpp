#pragma warning (disable:4996)
#include <stdio.h>

int main() {
	int n, cnt = 0;
	int a, b, c;
	scanf("%d", &n);

	if (n < 100) {
		printf("%d", n);
	}
	else {
		cnt = 99;
		for (int i = 100; i <= n; i++) {
			a = i / 100;
			b = (i / 10) % 10;
			c = i % 10;
		
			if ((a - b) == (b - c))
				cnt++;
		}
		printf("%d", cnt);
	}
	return 0;
}