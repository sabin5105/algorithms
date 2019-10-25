#pragma warning(disable:4996)
#include<cstdio>
#define MAX 246913
int arr[MAX];

int main()
{
	arr[1] = arr[0] = 1;
	for (int i = 2; i < MAX; i++) {
		if (!arr[i]) {
			for (int j = i + i; j < MAX; j += i)
				arr[j] = 1;
		}
	}
	while (1)
	{
		int n, cnt = 0;
		scanf("%d", &n);
		if (!n)break;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (!arr[i])
				cnt++;
		}
		printf("%d\n", cnt);

	}
}