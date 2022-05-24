#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int max=0,length;
	char a[16][16] = {NULL};

	for (int i = 0; i<5 ; i++) {
		scanf("%s", &a[i]);
		length = strlen(a[i]);
		if (max < length)
			max = length;
	}
	
	for (int j = 0; j < max; j++) {
		for (int i = 0; i < 5; i++) {
			if (a[i][j] != NULL) {
				printf("%c", a[i][j]);
			}
		}
	}

}