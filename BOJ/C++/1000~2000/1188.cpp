#include<iostream>

using namespace std;

int n, m;
int gcd(int a, int b)
{
	if (a%b == 0)
		return b;
	return gcd(b, a%b);
}

int main()
{
	cin >> n >> m;
	
	cout << m - gcd(n,m) << '\n';
}