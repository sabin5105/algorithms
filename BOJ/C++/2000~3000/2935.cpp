#include<iostream>
#include<string>
#include<string.h>

using namespace std;
int main()
{
	string a,b;
	int ans = 0;
	string real;
	char c;
	cin >> a >> c >> b;
	if (c == '*') {
		ans = a.length() + b.length()-1;
		real.resize(ans);
		for (int i = 0; i < ans; i++)
			real[i] = '0';
		real[0] = '1';
		cout << real;
	}
	if (c == '+') {
		int large = (a.length() > b.length()) ? a.length() : b.length();
		int small = (a.length() < b.length()) ? a.length() : b.length();
		real.resize(large);
		for (int i = 0; i < large; i++)
			real[i] = '0';
		real[0] = '1';
		real[large-small] += 1;
		cout << real;
	}
}