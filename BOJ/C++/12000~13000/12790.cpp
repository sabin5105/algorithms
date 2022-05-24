#pragma warning(disable:4996)
#include<cstdio>

int main()
{
	int n;
	int bh, bm, ba, bd, ah, am, aa, ad, h, m, a, d, stat;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d%d%d%d%d%d", &bh, &bm, &ba, &bd, &ah, &am, &aa, &ad);
		h = bh + ah;
		m = bm + am;
		a = ba + aa;
		d = bd + ad;
		if (h < 1)
			h = 1;
		if (m < 1)
			m = 1;
		if (a < 0)
			a = 0;
		stat = h + 5 * m + 2 * a + 2 * d;
		printf("%d\n", stat);
		bh = 0, bm = 0, ba = 0, bd = 0, ah = 0, am = 0, aa = 0, ad = 0;
	}
	return 0;
}