#include<iostream>
using namespace std;

pair<int, int> p1,p2,p3;    // point
pair<int, int> v1, v2;  // vector

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> p1.first >> p1.second >> p2.first >> p2.second >> p3.first >> p3.second;

    v1.first = p2.first - p1.first;
    v1.second = p2.second - p1.second;
    v2.first = p3.first - p2.first;
    v2.second = p3.second - p2.second;

    // sin(theta) = |v1 x v2| / |v1||v2|, +면 -1, -면 1, 0이면 평행

    int cross = v1.first*v2.second - v1.second*v2.first;
    if(cross > 0) cout << 1 << '\n';
    else if(cross < 0) cout << -1 << '\n';
    else cout << 0 << '\n';
}