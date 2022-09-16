#include<iostream>
using namespace std;

int dice[10] = {0,0,0,0,0,0};
int a, b, c;

int main(){
    cin >> a >> b >> c;
    dice[a]++;
    dice[b]++;
    dice[c]++;

    int eye = 0;
    for(int i=1;i<7;i++){
        if(dice[i] == 3){
            cout << 10000 + i*1000 << endl;
            return 0;
        }
        if(dice[i] == 2){
            cout << 1000 + i*100 << endl;
            return 0;
        }
        if(dice[i] == 1){
            eye = i;
        }
    }
    cout << eye*100 << endl;
}