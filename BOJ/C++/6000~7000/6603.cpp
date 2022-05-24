#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#pragma warning(disable:4996)

using namespace std;

int n;
string arr[20];

void backTracking(int pos, string str, int cnt)
{
	if (cnt == 6)
	{
		for (int i = 0; i < str.size(); i++)
			cout << str[i];

		cout << endl;
		return;
	}

	for (int i = pos; i < n; i++)
	{
		backTracking(i + 1, str + arr[i] + ' ', cnt + 1);
	}
}

int main()
{
	while (1)
	{
		scanf("%d", &n);

		if (n == 0)
			break;

		for (int i = 0; i < n; i++)
			cin >> arr[i];

		backTracking(0, "", 0);

		cout << endl;
	}

	return 0;
}

