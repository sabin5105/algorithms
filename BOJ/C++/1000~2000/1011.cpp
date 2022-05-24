#include<iostream>
#include<cmath>

using namespace std;
int warp(int temp)
{
	if (temp == 1)	return 1;
	if (temp == 2)	return 2;

	int temp_int = floor(sqrt(temp) + 0.5); 
	

	for (int i = 2;; i++)
	{
		if (sqrt(temp) > temp_int)	return temp_int * 2;
		else return temp_int * 2 - 1;
	}
}

int main()
{
	int T, x, y;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> x >> y;
		int temp = y - x;
		cout << warp(temp) << endl;
	}
}