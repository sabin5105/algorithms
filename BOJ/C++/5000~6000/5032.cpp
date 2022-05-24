#include<iostream>
using namespace std;

int main()
{
	int a, b, c, ans=0, cur=0;
	cin >> a >> b >> c;
	cur = a + b;
		while (cur>=c) {
			ans += cur / c;
			cur = cur/c + cur%c;
			
		}

	cout << ans << endl;

}