#include <iostream>
#include <vector>

using namespace std;

int main() {

	cin.tie(0);

	int n, c; cin >> n >> c;

	vector<int> arr(n);
	for (int i = 0; i<n; i++) {
		cin >> arr[i];
	}

	int sol = 0;
	for (int i = 1; i <= c; i++) {

		int cand = 0;
		for (int j = 0; j<n; j++) {
			if (i % arr[j] == 0) {
				cand++;
			}
		}
		
		if (cand) {
			sol++;
		}
	}

	cout << sol;

	return 0;
}
