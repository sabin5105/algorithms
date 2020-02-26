#include<iostream>
#include<string>

using namespace std;

bool wordCheck(string str) {
	bool alpabet[26] = { false }; 

	for (int i = 0; i<str.length(); i++) {

		if (alpabet[str[i] - 'a']) {
			return false;
		}
		else {                
			char tmp = str[i];
			alpabet[str[i] - 'a'] = true;

			while (1) {
				if (tmp != str[++i]) { 
					i--;
					break;
				}
			}

		}

	}
	return true;
}



int main(void) {

	int n;
	cin >> n;

	int count = 0;

	for (int i = 0; i<n; i++) {
		string str;
		cin >> str;

		if (wordCheck(str)) {
			count++;
		}

	}
	cout << count;

	return 0;
}

// another thing
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

bool alphabet[26];
int n;
int cnt = 0;

int main()
{
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;

		bool flag = false;
		char same = s[0];
		alphabet[same - 'a'] = true;
		for (int i = 1; i < s.length(); i++)
		{
			if (same == s[i])
			{
				alphabet[s[i] - 'a'] = true;
				continue;
			}
			if (alphabet[s[i] - 'a'] == true)
			{
				flag = true;
				break;
			}
			same = s[i];
			alphabet[s[i] - 'a'] = true;
		
		}
		memset(alphabet, 0, sizeof(alphabet));
		if (flag == false)
			cnt++;
	}
	cout << cnt;
}
