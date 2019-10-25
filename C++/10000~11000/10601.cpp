#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{

}

//int main()
//{
//	int max = 0, ans=0;
//	string n;
//	cin >> n;
//	int arr[10];
//	for (int i = 0; i < n.size(); i++)
//	{
//		arr[i] = n[i] - '0';
//	}
//	sort(arr, arr + (n.size()));
//
//	int res = 1;
//	for (int i = 0; i < n.size(); i++)
//		res *= 10;
//	res /= 10;
//	do
//	{
//		for (int i = n.size()-1; i >= 0; i--)
//		{
//			ans += res*arr[i];
//			res = res / 10;
//		}
//
//		if (ans % 30 == 0) {
//			cout << ans;
//			return 0;
//		}
//		res = 0;
//	} while (next_permutation(n.begin(), n.end()));
//	cout << "-1";
//}
// 위에는 오버 플로우 10^5개의 숫자이므로

