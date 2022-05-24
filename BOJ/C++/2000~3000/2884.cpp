#pragma warning(disable:4996)
#include<cstdio>

int main()
{
	int t, m,cnt=0;
	scanf("%d%d", &t, &m);
	
	if (m >= 45) {
		m = m - 45;
		cnt++;
	}
	if (t == 0) {
		if (cnt == 1)
			t = 0;
		if (cnt == 0)
			t = 24;
	}
	if (cnt == 0) {
		t = t - 1;
		m = 60 - (45-m);
	}
	printf("%d %d", t, m);

}