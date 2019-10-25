#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int arr[20];
int ans[20];
int flag[20] = { 0 };
int s;


int sum(int arr[])
{
	int sum = 0;
	for (int i = 0; i<sizeof(arr); i++)
	{
		sum += arr[i];
	}
	return sum;
}


int Tree(int n, int depth)
{
	int cnt = 0;
	if (depth == n)
	{
		for (int i = 0; i <= n; i++)
			if (flag[i] == 1) ans[i] = arr[i];
		if (sum(arr) == s)
			cnt++;
		return cnt;
	}

	flag[depth] = 1;
	Tree(n, depth + 1);
	flag[depth] = 0;
	Tree(n, depth + 1);

}

int main()
{
	int n, cnt=0, sum=0;

	cin >> n >> s;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	cout << Tree(n, 0);

}
