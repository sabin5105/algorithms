/*
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n[10], sum = 0, amount1, amount2;
	bool check;
	for (int i = 0; i < 9; i++)
	{
		cin >> n[i];
		sum += n[i];
	}

	int minus = sum - 100;
	abs(minus);
	sort(n, n + 9);

	for (int i = 0; i < 9; i++){
		for (int j = i+1; j < 9; j++)
			if (minus == (n[i] + n[j])) {
				amount1 = n[i], amount2 = n[j];
				check = true;
				break;
			}
		if (check == true)
			break;
	}
	for (int i = 0; i < 9; i++)
	{
		if ((n[i] == amount1) || (n[i] == amount2))
			continue;
		cout << n[i] << endl;
	}

}
*/ //����� ����� �Ǵµ� Ʋ��???

#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	vector<int> str(9);
	for (int i = 0; i < 9; ++i)
		scanf("%d", &str[i]);
	sort(str.begin(), str.end());
	vector<int> per(9);
	for (int i = 2; i < 9; ++i)
		per[i] = 1;

	do {
		int sum = 0;
		vector<int> ans;
		for (int i = 0; i < 9; ++i) {
			if (per[i]) {
				sum += str[i];
				ans.push_back(str[i]);
			}
		}
		if (sum == 100) {
			for (auto i : ans)
				printf("%d\n", i);
			return 0;
		}
		ans.clear();
	} while (next_permutation(per.begin(), per.end()));
}
//range base for��
//auto: �����߷� = �����Ϸ��� �˾Ƽ� �ڷ����� �߷��ؼ� �Ҵ�
//�װ� ��� ������ �츮��
//�� ���ȴ�
//permutaion �̰� �������� - ���� ���� begin �������� end ���� ��� ���°�? ���� �����ϴ°ǰ�
//�׷� ����for���Ἥ üũ�ϴ°Ŷ� ����Ѱ�?
