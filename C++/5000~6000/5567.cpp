#include<iostream>
using namespace std;
#define max 10000

int main()
{
	int n, m,a[max],b[max],store[max],num=0,ans=0;
	store[0] = '1';
	cin >> n >> m;
	for (int i = 0; i = m; i++) {
		cin >> a[i+1] >> b[i+1];
		num++;
		for (int j = 0; j = num + 1; j++) {
			if (a[i+1] == store[j] && b[i+1] != store[j]){
				store[i+1] = b[i+1];
				ans++;
			}
			if (b[i+1] == store[j] && a[i+1] != store[j]) {
				store[i+1] = a[i+1];
				ans++;
			}
		}
	}
	cout << ans << endl;
}