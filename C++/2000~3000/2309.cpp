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
*/ //제대로 출력은 되는데 틀림???

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
//range base for문
//auto: 형식추론 = 컴파일러가 알아서 자료형을 추론해서 할당
//그건 어떻게 추측함 우리가
//좀 지렸다
//permutaion 이게 오림차순 - 순열 만들어서 begin 에서부터 end 까지 계속 도는거? 으로 정리하는건가
//그럼 이중for문써서 체크하는거랑 비슷한거?
