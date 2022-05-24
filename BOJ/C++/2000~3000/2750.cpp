#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int str[1005], temp = 0,n;
	int j;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &str[i]);
	}
	for (int l = 0; l < n-1; l++)
	{
		if (str[l] > str[l + 1])
		{
			temp = str[l + 1];
			str[l + 1] = str[l];
			str[l] = temp;
		}
		/*for (int j = 0; j < n-1; j++)
		{
			if (str[j] > str[j + 1])
			{
				temp = str[j + 1];
				str[j + 1] = str[j];
				str[j] = temp;

			}
		}*/
	}
	for (int k = 0; k < n; k++)
	{
		printf("%d\n", str[k]);
	}

}