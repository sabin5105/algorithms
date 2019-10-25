#include <iostream>
using namespace std;

int fibonacci(int n)
{
	static int arr[41] = { 0 };
	if (arr[n] > 0) 
		return arr[n];
	if (n == 0) 
		return 0;
	if (n == 1 || n == 2) 
		return 1;
	return arr[n] = fibonacci(n - 2) + fibonacci(n - 1);
}


int main()
{
	int T, n;
	cin >> T;

	for (int i = 0; i < T; i++) 
	{
		cin >> n;
		if (n == 0)
			cout << 1 << ' ' << 0 << endl;
		else
			cout << fibonacci(n - 1) << ' ' << fibonacci(n) << endl;
	}

	return 0;
}
