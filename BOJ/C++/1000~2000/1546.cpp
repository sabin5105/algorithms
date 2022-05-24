#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int a, b,n,str[100];
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		str[i] = a + b;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", str[i]);
	}
	return 0;

}