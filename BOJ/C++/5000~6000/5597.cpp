#include <stdio.h>

int main() {
	int std[30] = { 0, }, i, chk;
	
	for (i = 0; i < 28; i++) {
		scanf("%d", &chk);
		std[chk - 1] = chk;
	}

	for (i = 0; i < 30; i++) {
		if (std[i] == 0)
		printf("%d\n", i + 1);
	}
}