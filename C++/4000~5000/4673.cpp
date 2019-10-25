#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdio.h>

int selfnumber(int n) {
	int sum = n;

	while (1) {

		if (n == 0)
			break;
		sum += n % 10;
		n = n / 10;

	}

	return sum;
}
int main()
{
	int arr[10005];

	for (int i = 0; i<10000; i++)
	{
		int idx = selfnumber(i);

		if (idx <= 10000)
		{
			arr[idx] = true;
		}

	}
	for (int i = 1; i<10000; i++)
	{
		if (arr[i])
			printf("%d\n", i);
	}

	return 0;
}
