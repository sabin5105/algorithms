#pragma warning (disable : 4996)
#include<stdio.h>

int main() {
	int s, B = 0;

	scanf("%d", &s);

	while (1) {
		if (s % 5 == 0) {
			printf("%d", s / 5 + B);
			break;
		}
		else if (s <= 0) {
			printf("-1");
			break;
		}
		s -= 3;
		B++;
	}

	return 0;
}
