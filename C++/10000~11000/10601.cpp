#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool cmp(char a, char b)
{
	if (a > b)
		return true;
	return false;
}

int main()
{
	string n;
	cin >> n;

	long long sum = 0;
	bool zero = false;
	for (int i = 0; i < n.size(); i++)
	{
		sum += (n[i] - '0');		//askii
		if (!(n[i] - '0'))
			zero = true;
	}
	if (sum % 3 || !zero)
	{
		cout << -1 << endl;
	}
	else
	{
		sort(n.begin(), n.end(),cmp);
		cout << n << endl;
	}
}
