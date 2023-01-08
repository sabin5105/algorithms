#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<set>
using namespace std;
const int INF = 1000000000;

int n,x,y;
vector<pair<int, int> > v;
set<pair<int, int> > s;

int dist(pair<int, int> a, pair<int, int> b){
    return (a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second);   // x^2 + y^2
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end());
    s.insert({ v[0].second, v[0].first });
    s.insert({ v[1].second, v[1].first });

    int ans = dist(v[0], v[1]);
    int start = 0;
    
    for (int i = 2; i < n; ++i)
        {
            while (start < i)
            {
                int d = v[i].first - v[start].first;
                if (d * d <= ans) break;
                else
                {
                    s.erase({ v[start].second, v[start].first });
                    start++;
                }
            }

            auto start = s.lower_bound({ v[i].second - sqrt(ans), -INF });
            auto end = s.upper_bound({ v[i].second + sqrt(ans), INF });
            for (auto it = start; it != end; it++)
                ans = min(ans, dist({ it->second, it->first }, v[i]));
            s.insert({ v[i].second, v[i].first });
        }

    cout << ans << '\n';
}