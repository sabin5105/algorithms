#include<iostream>
#include<algorithm>

using namespace std;

const int MAX = 1001;
const int INF = 987654321;

int n, cnt=0;
int jump[MAX];
int cache[MAX];

int Minway(int start)
{
	if (start == n)
		return 0;
	if (start > n)
		return INF;
	int &answer = cache[start];
	if (answer != INF)
		return answer;

	for (int i = 1; i <= jump[start]; i++)
		answer = min(answer, Minway(i + start)+1);
	return answer;
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> jump[i];
		cache[i] = INF;
	}
	int answer = Minway(1);
	if (answer == INF)
		answer = -1;
	cout << answer << endl;
	
}