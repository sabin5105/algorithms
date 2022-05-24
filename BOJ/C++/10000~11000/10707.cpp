#pragma warning(disable:4996)
#include<cstdio>

int main()
{
	int a, b, c, d, p, ans=0, ans1=0, ans2=0;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &p);

	if (p > c)
		ans1 = (p - c)*d + b;
	else if (p < c)
		ans1 = b;
	ans2 = p * a;
	if (ans1 < ans2)
		ans = ans1;
	else if (ans2 < ans1)
		ans = ans2;
	
	printf("%d", ans);

}