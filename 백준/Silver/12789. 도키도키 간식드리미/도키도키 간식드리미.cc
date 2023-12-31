#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> line;
    int curr = 1;       // 1번부터 받게 하고 이후에 +1     
    while(n--){
        int num;
        cin >> num;
        if(num == curr)     
            curr++;
            
        else if(num != curr)    
            line.push(num);

        while(!line.empty() && line.top() == curr){
            line.pop();
            curr++;
        }    
    }
    
    if(line.empty())
        cout << "Nice";
    else
        cout << "Sad";

    
}