#include <stdio.h>
int main() {
	int arr[5], min, min2;
	for (int i = 0; i<5; i++)
		scanf("%d", &arr[i]);
	min = arr[0];
	min2 = arr[3];
	for (int i = 1; i<3; i++)
		if (arr[i] < min)
			min = arr[i];
	if (arr[4] < min2)
		min2 = arr[4];
	printf("%d", min + min2 - 50);
	return 0;
}