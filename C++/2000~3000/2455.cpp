#pragma warning(disable:4996)
#include<cstdio>

int main()
{
	int sum = 0, in = 0, out = 0,max=0;

	for (int i = 0; i < 4; i++) {
		scanf("%d%d", &out, &in);
		sum += in;
		sum -= out;
		if (max < sum)
			max = sum;

	}
	printf("%d", max);

}