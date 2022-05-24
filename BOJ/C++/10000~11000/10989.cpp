#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int num;
	int count[10001] = { 0 };

	for (int i = 0; i< N; i++)
	{
		scanf("%d", &num);
		count[num]++;
	}
	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 0; j < count[i]; j++)
			printf("%d\n", i);
	}
}