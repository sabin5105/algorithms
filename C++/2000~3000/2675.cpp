#pragma warning (disable :4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int n,n2;
	char a[1005];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &n2);
		scanf("%s", a);
		for (int j = 0; j <strlen(a); j++)
		{
			for(int k=0;k<n2;k++)
			printf("%c", a[j]);
		}
		printf("\n");
	}
	return 0;
}