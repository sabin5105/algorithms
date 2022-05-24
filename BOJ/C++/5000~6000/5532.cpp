#pragma warning(disable:4996)
#include<cstdio>

int cal(int x, int y)
{
	int ans = 0;

	if (x%y == 0)
		ans = x / y;
	else
		ans = x / y + 1;

	return ans;
}

int main()
{
	int l, a, b, c, d,lar=0,math=0,kor=0;

	scanf("%d%d%d%d%d", &l, &a, &b, &c, &d);
	kor = cal(a,c);
	math = cal(b,d);
	lar = kor > math ? kor : math;
	printf("%d", l - lar);

}

