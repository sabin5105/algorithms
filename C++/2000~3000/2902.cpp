#include<iostream>
#include<string.h>
#include<string>

using namespace std;
int main()
{
	string str;
	getline(cin, str);
	cout << str[0];
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '-')
			cout << str[i + 1];
	}

}