#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

long long int x[5], y[5], s[6];
int T;
int main()
{
	cin >> T;
	while (T--)
	{
		int k = 0;
		for (int i = 0; i < 4; i++)
			cin >> x[i] >> y[i];
		for(int i=0;i<4;i++)
			for (int j = i + 1; j < 4; j++)
			{
				s[k] = (x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]);
				k++;
			}
		sort(s, s + 6);
		cout << (s[0] == s[1] && s[1] == s[2] && s[2] == s[3] && s[4] == s[5]) << endl;
	}
}