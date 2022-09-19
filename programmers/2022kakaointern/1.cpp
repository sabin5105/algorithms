#include<iostream>
#include<vector>
#include<deque>

using namespace std;

vector<int> queue1;
vector<int> queue2;

int solution(vector<int> queue1, vector<int> queue2) {
    deque<int> dq1 = deque<int>(queue1.begin(), queue1.end());
    deque<int> dq2 = deque<int>(queue2.begin(), queue2.end());

    long long temp_sum=0;
    long long sum=0;
    for(int i=0;i<queue1.size();i++) {
        temp_sum += dq1[i] + dq2[i];
        sum += dq1[i];
    }
    int answer = 0;
    if((temp_sum%2) != 0) return -1;

    long long half = temp_sum/2;
    
    while(sum != half){
        if(answer > (dq1.size()+dq2.size())*2) return -1;

        if(sum > half){
            sum -= dq1.front();
            dq2.push_back(dq1.front());
            dq1.pop_front();
            answer++;
        }
        else if(sum < half){
            sum += dq2.front();
            dq1.push_back(dq2.front());
            dq2.pop_front();
            answer++;
        }
    }

    return answer;
}

int main()
{
    for(int j=0;j<4;j++){
            int a;
            cin >> a;
            queue1.push_back(a);
        }
    for(int j=0;j<4;j++){
            int a;
            cin >> a;
            queue2.push_back(a);
        }
    
    cout << solution(queue1, queue2);
}