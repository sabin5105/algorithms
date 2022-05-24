#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	vector<string> v;
	vector<string> v_result;

	v.resize(n);
	for (int i = 0; i < n; i++) {
		cin>>v[i];
	}
	sort(v.begin(), v.end());

	string str;
	for (int j = 0; j < m; j++) {
		cin >> str;

		if (binary_search(v.begin(), v.end(), str)) {
			v_result.push_back(str);
		}
	}

	sort(v_result.begin(), v_result.end());
	
	printf("%d\n", (int)v_result.size());
	for (int i = 0; i < v_result.size(); i++) {
		printf("%s\n", v_result[i].c_str());
	}

}