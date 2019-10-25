#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N;
	cin >> N;

	vector<int> vec(N, 0);
	for (int i = 0; i<N; i++)
		scanf("%d", &vec[i]);

	sort(vec.begin(), vec.end());

	int ans = 0;
	for (int i = 0; i<N; i++)
		ans = max(ans, vec[i] * (N - i));

	cout << ans << endl;

	return 0;
}