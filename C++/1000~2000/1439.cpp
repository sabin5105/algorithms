#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	bool check = false;

	int i = 0, cnt1 = 0;
	while (i != s.size())
	{
		if (s[i] == '1') {
			while (s[i] != '0')
			{
				i++;
				if (i == s.size())
				{
					check = true;
					break;
				}
			}
			cnt1++;
		}
		if (check == true)
			break;
		i++;
	}

	bool check1 = false;
	int j = 0, cnt2 = 0;
	while (j != s.size())
	{
		if (s[j] == '0') {
			while (s[j] != '1')
			{
				j++;
				if (j == s.size())
				{
					check1 = true;
					break;
				}
			}
			cnt2++;
		}
		if (check1 == true)
			break;
		j++;
	}
	int ans = 0;
	if (cnt1 < cnt2)
	{
		cout << cnt1;
		return 0;
	}
	else 
		cout << cnt2;

}