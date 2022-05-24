#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int main() 
{
	char str[1000000];
	int cnt = 0, a = 0,k;
	int arr[26];

	scanf("%s", str);

	for (int j = 65; j < 91; j++)			//처음부터 ASKII 코드써야함
	{
		cnt = 0;
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] == j || str[i] == j + 32)
			{
				cnt++;
			}
		}
		arr[j - 65] = cnt;
	}

	int max = arr[0];

	for (int i = 1; i < 26; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	for (int i = 0; i < 26; i++)
	{
		if (max == arr[i])
		{
			a++;
			k = i;					//여기부터
		}
	}
	if (a == 1)
		printf("%c\n", k + 65);
	else if (a > 1)
		printf("?\n");				//여기까지를 내가 몰라서 못씀

	return 0;

}
