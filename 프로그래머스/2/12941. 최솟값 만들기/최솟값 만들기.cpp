#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());
    
    
    int repeat = A.size(); 
    int num_to_add = 0;
    vector<int> temp(A.size());
    
    for(int i = 0; i<repeat; i++){
        num_to_add += (A[i]*B[i]);
    }
    
    

    return num_to_add;
}