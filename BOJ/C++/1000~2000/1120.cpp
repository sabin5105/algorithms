#include<iostream>
#include<string>
using namespace std;

int main() {
	int cnt;
	int min = 50;
	string a, b;

	cin >> a >> b;

	for (int leng = 0; leng <= b.length() - a.length(); leng++) {
		cnt = 0;

		for (int i = 0; i < a.length(); i++) {
			if (a[i] != b[i + leng]) cnt++;
		}

		min = min >= cnt ? cnt : min;

	}
	cout << min << endl;
}
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<string.h>
//using namespace std;
//
//int main()
//{
//	int cnt=0;
//	string a, b;
//
//	if (a.size() == b.size())
//	{
//		for (int i = 0; i < a.size(); i++)
//		{
//			if (a[i] != b[i])
//				cnt++;
//		}
//		cout << cnt << endl;
//		return 0;
//	}
//
//	else
//	{
//		int cnt1=0, cnt2=0;
//		//여기서 out of range 나오는군
//		string a_b;
//		a_b = a;
//
//		int dif = b.size() - a.size();
//		for (int i = 1; i <= dif; i++)	{a_b[a.size() + i] = b[a.size() + i];}
//		for (int i = 0; i < b.size(); i++) { if (a_b[i] != b[i]) cnt1++; }
//		
//		string a_f;
//		a_f = a;
//
//		for (int i = a.size()-1; i = 0; i--)	{ a_f[i + dif] = a_f[i]; }
//		for (int i = 0; i < dif; i++) { a_f[i] = b[i];}
//		for (int i = 0; i < b.size(); i++) { if (a_f[i] != b[i]) cnt2++; }
//		
//		cout << min(cnt1, cnt2) << endl;
//		return 0;
//
//	}
//}