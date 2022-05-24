#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char str[13], temp;
	int i, j, length;
	scanf("%s", &str);
	length = strlen(str);

	for (i = 0; i < length; i++) {
		for (j = 0; j < length; j++) {
			if (str[i] > str[j]) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	printf("%s",str);
}

