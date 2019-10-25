#include <iostream>
using namespace std;

int main() {
	long long c, k, t = 1;
	cin >> c >> k;
	for (int i = 0; i < k; i++) { t *= 10; }
	k = t / 10;
	cout << (c + (k * 5)) / (k * 10) * (k * 10);
	return 0;
}
