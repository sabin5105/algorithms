#pragma warning(disable:4996)
#include <stdio.h>



int main() {
	int prison[1000], room, i, j, k, l, m, t, sum = 0;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		sum = 0;
		scanf("%d", &room);
		for (j = 0; j < room; j++) {
			prison[j] = 1;
		}
		for (k = 2; k <= room; k++) {
			for (m = k; m <= room; m += k) {
				if (prison[m - 1] == 1)
					prison[m - 1] = 0;
				else if (prison[m - 1] == 0)
					prison[m - 1] = 1;
			}
		}
		for (l = 0; l < room; l++) {
			sum += prison[l];

		}
		printf("%d\n", sum);

	}

}