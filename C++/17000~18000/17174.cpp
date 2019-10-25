#include <cstdio>
int main() {
	int n, m; scanf("%d %d", &n, &m);
	int ans = n, tmp = n;
	while (tmp >= m) {

		ans += tmp / m;
		tmp /= m;
	}
	printf("%d", ans);
	return 0;
}
