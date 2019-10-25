#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n, temp = 0, cnt = 1, k, q1;
	vector<int> str;
	vector<int> q2;

	cin >> n;
	for (int i = 0; i < n; i++) {
		str.push_back(i);
		str[i] += 1;
	}

	cin >> k;
	if (k == 1) {
		cin >> q1;
		for (int i = 0; i < q1; i++) {
			if (i == (q1 - 1))
				for (int j = 0; j < n; j++)
					cout << str[j] << " ";
			next_permutation(str.begin(), str.end());
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			cin >> temp;
			q2.push_back(temp);
		}
		while (next_permutation(str.begin(), str.end())) {
			cnt++;
			if (str == q2) {
				cout << cnt;
				break;
			}
		}
	}

}


//vector<int> _1(vector<int> str, vector<int> store, int n, int cnt)
//{
//	int temp = 0, cnt1 = 1;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		str.push_back(temp);
//	}
//	while (next_permutation(str.begin(), str.end())) {
//		cnt1++;
//		if (cnt == cnt1)
//			return store;
//		store = str;
//	}
//}
//int _2(vector<int> str, int n, int cnt)
//{
//	int temp = 0;
//	vector<int> store;
//
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		store.push_back(temp);
//	}
//	while (next_permutation(str.begin(), str.end())) {
//		cnt++;
//		if (store == str)
//			return cnt;
//	}
//}