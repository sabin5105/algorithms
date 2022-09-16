#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int cnt = 0;
string s;

int isPalindrome(string s){
    bool flag = true;
    for(int i=0; i<=s.length()/2; i++){
        cnt++;
        if(s[i] != s[s.length()-1-i]){
            flag = false;
            break;
        }
    }

    return flag;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cnt = 0;
        cin >> s;
        cout << isPalindrome(s) << " " << cnt << endl;
    }
}