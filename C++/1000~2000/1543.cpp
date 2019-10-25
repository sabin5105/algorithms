#include<iostream>
#include<cstring>
#pragma warning(disable:4996)
using namespace std;


//string input;
//string word;
char* input;
char* word;

int main()
{
	char input[3000];
	char word[3000];

	scanf("%s", &input);
	scanf("%s", &word);

	cin >>

	cout << input.c_str() << endl;
	cout << word.c_str() << endl;

	int cnt = 0;
	int ans = 0;
	for (int i = 0; i < input.length(); i++)
	{
		if (cnt == word.length())
		{
			cnt = 0;
			ans++;
		}
		if (input[i] != word[cnt])
		{
			cnt = 0;
			continue;
		}
		cnt++;
	}
	cout << ans;
}