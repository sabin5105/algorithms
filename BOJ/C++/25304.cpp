#include<iostream>
using namespace std;

int price;
int n;
int main(){
    cin >> price >> n;
    int sum = 0;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        sum += a*b;
    }
    if(sum==price)  cout << "Yes" << endl;
    else    cout << "No" << endl;
}