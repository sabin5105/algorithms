#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int str[1005], temp = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &str[i]);
	}
	for (int l = 0; l < 4; l++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (str[j] > str[j + 1])
			{
				temp = str[j + 1];
				str[j + 1] = str[j];
				str[j] = temp;

				for (int k = 0; k < 5; k++)
				{
					printf("%d ", str[k]);

				}
				printf("\n");
			}

		}


	}

}