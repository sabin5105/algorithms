#include<iostream>
#include<string>

using namespace std;

int main()
{
	bool chess[10][10];
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			chess[i][j] = false;

	for (int i = 0; i < 8; i+=2)
		for (int j = 0; j < 8; j+=2)
			chess[i][j] = true;
	for (int i = 1; i < 8; i += 2)
		for (int j = 1; j < 8; j += 2)
			chess[i][j] = true;

	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		string input;
		cin >> input;
		for (int j = 0; j < 8; j++)
		{
			if (input[j] == 'F' && chess[i][j] == true)
				cnt++;
		}
	}
	cout << cnt;

}