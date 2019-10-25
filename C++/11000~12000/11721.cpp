#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{
	char str[100]="";
	int length = 0, i;

	scanf("%s",&str);
	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		printf("%c",str[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}

	return 0;
}