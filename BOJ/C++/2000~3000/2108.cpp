#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 500000;
int arr[MAX];
int visited[8001];
int main()
{
	int n;
	cin >> n;

	double sum = 0;
	int MAX_NUM = -4000, MIN_NUM = 4000;
	for (int i = 0; i < n; i++)	// input
	{
		cin >> arr[i];
		sum += arr[i];
		visited[arr[i] + 4000]++;
		MAX_NUM = max(MAX_NUM, arr[i]);
		MIN_NUM = min(MIN_NUM, arr[i]);
	}

	double average = sum / (double)n;
	printf("%.0f\n", average);

	sort(arr, arr + n);	// mid
	cout << arr[n / 2] << "\n";

	int num = -1;
	int cnt = 0;
	bool second = false;
	for (int i = 0; i <= 8000; i++)	// mode
	{
		if (cnt < visited[i])
		{
			cnt = visited[i];
			num = i;
			second = false;
		}
		else if (cnt == visited[i] && !second)
		{
			num = i;
			second = true;
		}
	}
	cout << num - 4000 << "\n";
	cout << MAX_NUM - MIN_NUM << "\n";	// interval
	return 0;
}
