#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

char arr[51];
bool check[105];
int n, cnt=0, ans=0;

int main()
{
	fill(check, check + 104, false);

	string temp;
	cin >> n >> temp;

	for (int i = 0; i < n; i++)
		arr[2*i+1] = temp[i];

	for (int i = 1; i < n+1; i++)
	{
		int j = i * 2 - 1;
		if (arr[j] == 'S')
			check[j - 1] = check[j + 1] = true;

		else if (arr[j] == 'L' && ((cnt % 2) == 0))
		{
			check[j - 1] = true;
			cnt++;
		}
		else if (arr[j] == 'L' && ((cnt % 2) == 1))
		{
			check[j + 1] = true;
			cnt++;
		}
	}
	for (int i = 1; i < n+1; i++)
	{
		int j = i * 2 - 1;

		if (arr[j] == 'S')
		{
			if (check[j - 1] == true)
			{
				ans++;
				check[j - 1] = false;
				continue;
			}
			else if(check[j + 1] == true)
			{
				ans++;
				check[j + 1] = false;
				continue;
			}
			continue;
		}
		if (arr[j] == 'L')
		{
			if (check[j - 1] == true)
			{
				ans++;
				check[j - 1] = false;
				cnt++;
				continue;
			}
			else if (check[j + 1] == true)
			{
				ans++;
				check[j + 1] = false;
				cnt++;
				continue;
			}
			continue;
		}
	}
	cout << ans;
}