#include<iostream>
#include<cstring>
#include<vector>

using namespace std;
int fail[1000001];
char s[1000001];
char w[1000001];

int main()
{
	gets_s(s, sizeof(s));
	gets_s(w, sizeof(w));
	int n = strlen(s);
	int m = strlen(w);
	for (int i = 1, j = 0; i < n; i++)	// fail function
	{
		while (j > 0 && w[i] != w[j])
			j = fail[j - 1];
		if (w[i] == w[j])
			fail[i] = ++j;
	}
	vector<int> ans;
	for (int i = 0, j = 0; i < n; i++) {
		while (j > 0 && s[i] != w[j]) j = fail[j - 1];
		if (s[i] == w[j]) {
			j++;
			if (j == m) {
				ans.push_back(i - m + 2);
				j = fail[j - 1];
			}
		}
	}
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";

}