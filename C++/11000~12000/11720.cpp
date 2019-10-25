#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int i, n,sum=0,str[100];
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%1d", &str[i]);
		sum += str[i];
	}
	printf("%d", sum);
}