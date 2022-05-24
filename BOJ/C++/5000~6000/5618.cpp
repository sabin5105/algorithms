#include<iostream>
using namespace std;

int main()
{
	int n,check[3],ans=0,lar=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> check[i];
		if (lar < check[i])
			lar = check[i];
	}
	cout << "1" << endl;
	if (n == 2) {
			for (int j = 2; j <= lar; j++) {
				if (check[0] % j == 0 && check[1] % j == 0)
					cout << j << endl;
			}
	}
	if (n == 3) {
		for (int j = 2; j <= lar; j++) {
			if (check[0] % j == 0 && check[1] % j == 0 && check[2] % j == 0)
				cout << j << endl;
		}
	}

}