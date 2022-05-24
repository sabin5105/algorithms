#include <stdio.h>

int main() {

	long long int S, i, n = 0;

	int cnt = 0;

	scanf("%lld", &S);

	for (i = 1; ; i++) {

		n += i;

		cnt++;

		if (n > S) {
			cnt--;
			break;
		}
	}

	printf("%d\n", cnt);
	return 0;
}