#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	int alp[27];
	scanf("%s", str);

	for (int i = 0; i < 26; i++)
	{
		alp[i] = -1;
	}

	for(int j=0;j<26;j++){
		for (int i = strlen(str)-1; i >= 0; i--){
			if (str[i] == 'a' + j) {
				alp[j] = i;
			}
		}
	}

	for (int j = 0; j < 26; j++)
	{
		printf("%d ", alp[j]);
	}
	
}