#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i,length=0;

	scanf("%s", &str);
	length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (str[i] == 'C' || str[i] == 'A' || str[i] == 'M'
			|| str[i] == 'B' || str[i] == 'R' || str[i] == 'I'
			|| str[i] == 'D' || str[i] == 'G' || str[i] == 'E')
			continue;
		printf("%c", str[i]);
	}
	return 0;
}