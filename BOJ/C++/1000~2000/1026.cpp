#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<string.h>
#include<cstdlib>

using namespace std;
int main()
{
	int n, b[51];
	vector<int> a;

	cin >> n;

	for (int j = 0; j < n; j++)
	{
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	vector<int> New_b;
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
		New_b.push_back(b[i]);
	}

	sort(a.begin(), a.end());
	sort(New_b.begin(), New_b.end());

	//�ִ뿡 �ּҸ� ���ߴ� ��
	//next_permutation�� �ð��ʰ� (50! �̹Ƿ�)
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i] * New_b[n-1-i];
	}
	cout << sum;

}