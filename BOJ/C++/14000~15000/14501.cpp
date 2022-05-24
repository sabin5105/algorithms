#include <iostream>
#include <algorithm>
#include <cstring> //memset
using namespace std;

const int MAX = 15 + 1;
const int INF = 987654321;
int N;
pair<int, int> input[MAX];
int cache[MAX];

int maxProfit(int day)
{
	if (day == N + 1)
		return 0;

	if (day > N + 1)
		return -INF;

	int &result = cache[day];

	if (result != -1)
		return result;

	result = 0;
	// 지금 카운트 할지 넘어갈지? max로 구분
	result += max(input[day].second + maxProfit(day + input[day].first), maxProfit(day + 1));
	return result;
}

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
		cin >> input[i].first >> input[i].second;
	memset(cache, -1, sizeof(cache));

	cout << maxProfit(1) << endl;
	return 0;
}