#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int a;
	double yuclid=0, circle=0;
	cin >> a;
	circle = a * a * M_PI;
	yuclid = 2*(a*a);
	printf("%.6f\n", circle);
	printf("%.6f", yuclid);
}