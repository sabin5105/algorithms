#include<iostream>

using namespace std;
int n, m, x;
long long cnt[1001];
long long sum, ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> x;
        sum += x;
        cnt[sum%m]++;        
    }
    for(int i=0;i<m+1;i++){
        ans += cnt[i] * (cnt[i] - 1) / 2;
    }
	cout << cnt[0] + ans;
}