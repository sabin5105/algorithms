#pragma warning(disable :4996)
#include <stdio.h>
#include <stdlib.h>


int testprime(int n)
{
	if (n == 1) {
		return 0;
	}
	for (int i = 2; i < n; i++) {
		if (n%i == 0) {
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n,n1,cnt=0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &n1);
		if (testprime(n1) == 1)
			cnt++;
	}
	printf("%d", cnt);
}
