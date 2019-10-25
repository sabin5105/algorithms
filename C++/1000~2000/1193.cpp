#pragma warning(disable:4996)
#include <stdio.h>
#define max 3500
#include <string.h>
char arr[max][max];

int main()
{
	int n=0;
	
	scanf("%d", &n);

}

void setting(int i = 0, int j = 0)
{
	int n=0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			arr[i][j] = i / j;
		}
	}
}

char check(int i = 0, int j = 0)
{
	int n = 0;

	scanf("%d", &n);
	

}