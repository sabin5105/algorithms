#include<iostream>
#include<algorithm>


using namespace std;
int main()
{
	int x, y, w, h;
	int small = 1000;
	cin >> x >> y >> w >> h;

	if (w - x < small && x > w/2)
		small = w - x;
	if (h - y < small && y > h/2)
		small = h - y;
	if (x < small && x <= w / 2)
		small = x;
	if (y < small && y <= h / 2)
		small = y;

	cout << small;
}