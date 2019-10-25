#include<cstdio>
int t, n, k, d[15][15];

int main() {
	for (int i = 1; i < 15; i++) 
		d[0][i] = i;
	for (int i = 1; i < 15; i++) 
		for (int j = 1; j < 15; j++)
		d[i][j] = d[i - 1][j] + d[i][j - 1];

	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &k, &n);
		printf("%d\n", d[k][n]);
	}

	return 0;
}