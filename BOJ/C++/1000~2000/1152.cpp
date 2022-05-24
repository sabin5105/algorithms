#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000005];
	int i=0, cnt = 0,len=0;
/*
	fgets(str, 1000000, stdin);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			cnt++;
		}
	}
*/
	
	while (scanf("%s", str) != EOF)
		cnt++;

	printf("%d", cnt + 1);
	
	return 0;
}