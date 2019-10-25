#include <stdio.h>
#pragma warning (disable:4996)
#include <string.h>

int main()
{
	char str[100];
	int i,length=0,cnt=0;

	scanf("%s", &str);
	length = strlen(str);

	for (i = 0; i < length; i++)

	{
	if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
		{
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}