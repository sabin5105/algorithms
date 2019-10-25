#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	char *p, *p1, a,b;

	scanf("%s%s", &a,&b);

	p = &a;
	p1 = &b;

	printf("%d", *p+*p1);


	return 0;

}