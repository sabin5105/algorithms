#include <iostream>
using namespace std;

int n, i, j, k, c[201][3], score[201];

int main() {
	cin >> n;
	for (i = 0; i < n; i++) { cin >> c[i][0] >> c[i][1] >> c[i][2]; }
	for (i = 0; i < 3; i++) {
		for (j = 0; j < n; j++) {
			bool same = true;
			for (int k = 0; k < n; k++) { if (j != k && c[j][i] == c[k][i]) { same = false; } }
			if (same) { score[j] += c[j][i]; }
		}
	}
	for (i = 0; i < n; i++) {
		cout << score[i] << '\n';
	}
}