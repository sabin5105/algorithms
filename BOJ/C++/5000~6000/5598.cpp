#include<iostream>
#include<string>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'A')
		{
			str[i] = 'X';
			cout << str[i];
			continue;
		}
		else if(str[i] == 'B')
		{
			str[i] = 'Y';
			cout << str[i];
			continue;
		}
		else if (str[i] == 'C')
		{
			str[i] = 'Z';
			cout << str[i];
			continue;
		}
		else
		{
			char a;
			a = str[i] - 3;
			cout << a;

		}
	}

}