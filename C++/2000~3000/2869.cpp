#include<iostream>

using namespace std;

int main()
{
	int a, b, v;
	cin >> a >> b >> v;

	if ((v-b) % (a - b) == 0)	// 딱 떨어짐?
		cout << (v - b) / (a - b) << endl;
	else
		cout << (v-b) / (a - b) + 1 << endl;

}