#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int a, b, c, d, e,str[10],ave=0,sum=0;
	
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &str[i]);
		if (str[i] < 40)
		{
			str[i] = 40;
		}
		sum += str[i];
	}
	printf("%d", sum / 5);

}