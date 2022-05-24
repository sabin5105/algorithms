#include <iostream>
#include <algorithm>
using namespace std;
int w[10], k[10], w_s, k_s;
int main() {
	for (int i = 0; i < 10; i++)
		cin >> w[i];
	for (int i = 0; i < 10; i++)
		cin >> k[i];
	sort(w, w + 10);
	sort(k, k + 10);
	for (int i = 7; i < 10; i++)
	{
		w_s += w[i];
		k_s += k[i];
	}
	cout << w_s << ' ' << k_s << '\n';
}