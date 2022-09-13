#include <iostream>
#include<string>
using namespace std;

int fibo[50] = {0,1,1};
string n;
int sum=0;

int makeFibo(int n){
    int i=1;
    while(fibo[i] <= n){
        fibo[i+1] = fibo[i] + fibo[i-1];
        i++;
    }
    return i;
}

// 가장 가까운 피보나치 구함
int nearestSmallerEqFib(int n, int max_index)
{
    if (n == 0 || n == 1)
        return n;
 
    for(int i=max_index; i>=0; i--){
        if(fibo[i] <= n){
            return i;
        }
    }
}

void printFibRepresntation(int n)
{
    int max_index = makeFibo(n);
    while (n > 0) {
        int idx = nearestSmallerEqFib(n, max_index);

        if(idx==1 || idx==2) sum++;
        else if(idx==0) sum+=0;
        else sum += fibo[idx-1];
        
        n -= fibo[idx];
    }
    cout << sum << endl;
}

int main()
{
    cin >> n;
    printFibRepresntation(stoi(n));
    // while(1){
    //     cin >> n;
    //     printFibRepresntation(stoi(n));
    
    // }
    return 0;
}