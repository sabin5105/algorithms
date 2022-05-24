#include<cstdio>
#pragma warning (disable : 4996)
int max(int a, int b) { return a > b ? a : b; }
int n, i, j, a[257], ans;
int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (i = n; i > 1; i--) {
		for (j = 1; j <= n; j++) if (a[j] == i) break;
		ans += a[j] - max(a[j - 1], a[j + 1]);
		for (; j <= n; j++) a[j] = a[j + 1];
	}
	printf("%d", ans);
	return 0;
}