#include <iostream>

using namespace std;

int main(void)
{
	int alphabet_cnt[26];
	for (int i = 0; i < 26; i++)
		alphabet_cnt[i] = 0;

	int N;
	cin >> N;

	char name[31];
	for (int i = 0; i < N; i++)
	{
		cin >> name;
		alphabet_cnt[name[0] - 'a']++;
	}

	char c;
	bool none_flag = true;
	for (int i = 0; i < 26; i++)
	{
		if (alphabet_cnt[i] >= 5)
		{
			none_flag = false;
			c = i + 'a';
			cout << c;
		}
	}

	if (none_flag == true)
		cout << "PREDAJA" << endl;

	return 0;
}