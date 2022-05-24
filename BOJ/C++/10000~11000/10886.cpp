#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n,a,cnt=0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a == 1)
			cnt++;
		a = 0;
	}
	if (cnt > (n / 2))
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute!");
}