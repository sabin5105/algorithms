#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n,a=0,b=0,c=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &a, &b, &c);
		if (a+c > b)
			printf("do not advertise\n");
		else if (a+c < b)
			printf("advertise\n");
		else if (a+c == b)
			printf("does not matter\n");
	}
	return 0;
}
