#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,temp=0;
	vector<int> str;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> temp;
		str.push_back(temp);
	}
	if (prev_permutation(str.begin(), str.end())) {
		for (int i = 0; str.begin() + i != str.end(); ++i)
			cout << str[i] << " ";
	}
	else
		cout << "-1" << "" << endl;
}