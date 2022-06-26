#include<iostream>

using namespace std;

int a,b,c,T;
int main()
{
    cin >> T;
    a = T/300;
    T = T%300;
    b = T/60;
    T = T%60;
    c = T/10;
    T = T%10;

    if(T==0)
        cout << a << " " << b << " " << c << endl;
    else
        cout << "-1";
}