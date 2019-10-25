#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int R, C;
	cin >> R >> C;
	char temp;
	vector<vector<char>> str;
	
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			str.push_back(temp);
		}
	}
	int newR = 2 * R, newC = 2 * C;
	for (int i = newR; i >= R; i--) {
		for (int j = newC; j >= C; j--) {
			str[i][j] = str[newR-i][newC-j];
		}
	}
	int errX, errY;
	cin >> errX >> errY;
	if (str[errX][errY] = '.')
		str[errX][errY] = '#';
	else
		str[errX][errY] = '.';
	for (int i = 0; i < newR; i++) {
		for (int j = 0; j < newC; j++) {
			cout << str[i][j];
		}
	}

}