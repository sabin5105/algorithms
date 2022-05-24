#include<iostream>
#include<algorithm>

using namespace std;
bool desc(int a, int b) {
	return a > b;
}

int main()
{
	int n, m, num[100], min = 300001, sum = 0,ans=0;
	cin >> n >> m;

	for (int i = 0; i < n; i++){
		cin >> num[i];
	}
	sort(num, num + n, desc);

	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++)
			for (int k = j+1; k < n; k++) {
				sum = num[i] + num[j] + num[k];
				if ((m - sum) < min && sum <= m) {
					min = m - sum;
					ans = sum;
				}
			}
	cout << ans;
}