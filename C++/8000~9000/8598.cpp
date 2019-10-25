#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i,j,cnt=0,n,length=0,sum=0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", &str);
		for (j = 0; str[j] != '\0' ; j++)
		{
			if (str[j] == 'X')
			{
				cnt = 0;
			}
			else
			{
				cnt++;
				sum += cnt;
			}
		}
		printf("%d\n", sum);
		sum = 0;
		cnt = 0;
	}


}