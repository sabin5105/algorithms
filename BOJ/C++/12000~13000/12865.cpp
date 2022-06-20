#include<iostream>
#include<algorithm>
using namespace std;

int N, K;
int DP[101][100001];
int W[101];
int V[101];

// 점화식 max(DP[i-1][j], DP[i-1][j-W[i]])
int main()
{
	cin >> N >> K;

	for (int i = 1; i <= N; i++){
        cin >> W[i] >> V[i];
    }
    

	for(int limit=1;limit<=K;limit++){
        for(int i=1;i<=N;i++){
            if(W[i]>limit){
                DP[i][limit] = DP[i-1][limit];
            }
            else{
                DP[i][limit] = max(DP[i-1][limit], DP[i-1][limit-W[i]]+V[i]);
            }
        }
    }

	cout << DP[N][K];
}