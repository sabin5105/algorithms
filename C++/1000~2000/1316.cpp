#include<iostream>
#include<string>

using namespace std;

bool wordCheck(string str) {
	bool alpabet[26] = { false }; 

	for (int i = 0; i<str.length(); i++) {

		if (alpabet[str[i] - 'a']) {
			return false;
		}
		else {                
			char tmp = str[i];
			alpabet[str[i] - 'a'] = true;

			while (1) {
				if (tmp != str[++i]) { 
					i--;
					break;
				}
			}

		}

	}
	return true;
}



int main(void) {

	int n;
	cin >> n;

	int count = 0;

	for (int i = 0; i<n; i++) {
		string str;
		cin >> str;

		if (wordCheck(str)) {
			count++;
		}

	}
	cout << count;

	return 0;
}