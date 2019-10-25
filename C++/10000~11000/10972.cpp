#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	vector <int> num;
	int n;
	scanf("%d", &n);
	int tmp;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &tmp);
		num.push_back(tmp);
	}
	if (next_permutation(num.begin(), num.end())) {
		for (int i = 0; num.begin() + i != num.end(); ++i)
			printf("%d ", num[i]);
	}
	else
		printf("-1");
}