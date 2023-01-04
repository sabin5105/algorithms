#include<iostream>
#include<string>

using namespace std;

string felindrom(string s){
    for (int i=0;i<s.length()/2;i++){
        if(s[i] != s[s.length()-i-1])
            return "no";
    }
    return "yes";
}

int main()
{
    string s;
    while(1){
        cin >> s;
        if(s == "0") break;
        cout << felindrom(s) << endl;
    }
}