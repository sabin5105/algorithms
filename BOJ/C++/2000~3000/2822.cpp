#include <stdio.h>

int main() {
	int x[8] = { 0, }, y[8] = { 0, }, idx[8] = { 0, };

	int i, j, k, tmp, sum = 0;

	for (i = 0; i < 8; i++) {
		scanf("%d", &x[i]);
		y[i] = x[i];
	}
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (x[i] > x[j]) {
				tmp = x[i];
				x[i] = x[j];
				x[j] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		sum += x[i];

		for (j = 0; j < 8; j++) {
			if (x[i] == y[j])
			idx[j] = j + 1;
		}
	}

	printf("%d\n", sum);

	for (i = 0; i < 8; i++) {
		if (idx[i] != 0)
			printf("%d ", idx[i]);
	}
}