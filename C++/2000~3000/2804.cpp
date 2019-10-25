#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char a[31], b[31], ans[31][31];
	int n, m, cntn=0, cntm=0;
	bool out = false;

	cin >> a >> b;
	for (int i = 0; i < strlen(a); i++)
		for (int j = 0; j < strlen(b); j++)
			ans[j][i] = {'.'};
	for (int i = 0;i<=strlen(a); i++) {
		for (int j = 0;j<=strlen(b); j++)
			if (a[i] == b[j]) {
				cntn += i;
				cntm += j;
				out = true;
				break;
			}
		if (out == true)
			break;
	}
	for (int i = 0; i <= strlen(b); i++)
		ans[i][cntn] = b[i];
	for (int i = 0; i <= strlen(a); i++)
		ans[cntm][i] = a[i];
	for (int i = 0; i < strlen(b); i++) {
		for (int j = 0; j < strlen(a); j++)
			cout << ans[i][j];
		cout << "\n";
	}
}