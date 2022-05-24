#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a,ten,one,sum=0,new_one,new_ten,new_sum,cnt=0;

	scanf("%d", &a);
	new_sum = a;
	while(1)
	{
		ten = new_sum / 10;
		one = new_sum % 10;
		sum = ten + one;
		new_one = sum % 10;
		new_ten = one;
		new_sum = new_ten*10 + new_one;
		cnt++;
		if (new_sum == a)
			break;

	}
	printf("%d", cnt);
}