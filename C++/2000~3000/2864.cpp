#include<iostream>
#include<string>
#include<string.h>
#include<cmath>
using namespace std;

int main()
{
	int max = 0, min = 0;
	string a, b;
	cin >> a >> b;

	string temp_a = a;
	string temp_b = b;

	for (int i = 0; i < a.length(); i++){
		if (temp_a[i] == '6')
			temp_a[i] = '5';
		int temp = (int)temp_a[i]-48;
		min += temp * pow(10,(a.length()-1)-i);
	}

	for (int i = 0; i < b.length(); i++) {
		if (temp_b[i] == '6')
			temp_b[i] = '5';
		int temp = (int)temp_b[i] - 48;
		min += temp * pow(10, (b.length()-1)-i);
	}

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '5')
			a[i] = '6';
		int temp = (int)a[i] - 48;
		max += temp * pow(10, (a.length() - 1) - i);
	}

	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '5')
			b[i] = '6';
		int temp = (int)b[i] - 48;
		max += temp * pow(10, (b.length() - 1) - i);
	}

	cout << min << ' ' << max;

}