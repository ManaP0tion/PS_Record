#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

priority_queue<int, vector<int>> MaxQ;
priority_queue<int, vector<int>, greater<int>> MinQ;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;


    int num, mid;
    for(int i = 0; i < n; i++){
        cin >> num;

        if(MaxQ.empty() || MinQ.size() == MaxQ.size())
            MaxQ.push(num);
        else
            MinQ.push(num);
        if(!MinQ.empty() && !MaxQ.empty() && MinQ.top() < MaxQ.top())
        {
            int MinTop = MinQ.top();
            int MaxTop = MaxQ.top();

            MinQ.pop();
            MaxQ.pop();

            MinQ.push(MaxTop);
            MaxQ.push(MinTop);
        }

        cout << MaxQ.top() << "\n";
    }
}

