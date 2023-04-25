#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int> Axis1, pair<int, int> Axis2)
{
    if(Axis1.first == Axis2.first) 
        return Axis1.second < Axis2.second;

    return Axis1.first < Axis2.first;
}

int main(){
    
    int input_count;
    cin >> input_count;
    vector<pair<int, int> > Axis;

    for(int i=0; i<input_count; i++){
        int x, y;
        cin >> x >> y;
        Axis.push_back(make_pair(x, y));
    }
    
    sort(Axis.begin(), Axis.end(), compare);
    
    for(auto& result : Axis){
        cout << result.first << " " << result.second << '\n';
    }


}