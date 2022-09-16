#include<iostream>
using namespace std;

int h,m,n;
int main(){
    cin >> h >> m >> n;
    m += n;
    h += m/60;
    m %= 60;
    if (h >= 24) h -= 24;
    cout << h << " " << m << endl;
}