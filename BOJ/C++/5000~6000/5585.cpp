#pragma warning(disable:4996)
#include<cstdio>

int main()
{
	int pay,rest=0, yen500=0, yen100=0, yen10=0,asw=0,yen50=0,yen5=0,yen1=0;
	scanf("%d", &pay);

	rest = 1000 - pay;
	yen500 = rest / 500;
	yen100 = (rest - yen500 * 500)/100;
	yen50 = (rest - yen500 * 500 - yen100 * 100) / 50;
	yen10 = (rest - yen500 * 500 - yen100 * 100 - yen50*50) / 10;
	yen5 = (rest - yen500 * 500 - yen100 * 100 - yen50 * 50 - yen10 * 10) / 5;
	yen1 = (rest - yen500 * 500 - yen100 * 100 - yen50 * 50 - yen10 * 10 - yen5 * 5);

	asw = yen500 + yen100 + yen10+yen50+yen5+yen1 ;
	printf("%d", asw);

}
