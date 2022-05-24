#pragma warning(disable:4996)
#include<cstdio>

int main()
{
	int n,n1,ti=0,i;
	float d, td = 0, ans_td = 0;

	scanf("%d", &n);
	for (int k = 0; k < n; k++) 
	{
		scanf("%d", &n1);
		for (int j = 0; j < n1; j++)
		{
			scanf("%d%f",&i,&d);
			ti += i;
			td += d*i;
		}
		ans_td = td / ti;
		printf("%d% .1f\n", ti, ans_td);
		ans_td = 0,ti = 0,td=0;
	}
}