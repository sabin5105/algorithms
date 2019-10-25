#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
	string str;
	int alp[200] = { 0 };

	cin >> str;
	int length = str.length();
	for (int i = 0; i < length ; i++)
	{
		int store = str[i];
		alp[store]++;
	}
	for (int i = 97; i < 123; i++) {
		cout << alp[i] << ' ';
	}

}