#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    int Psize = prices.size();
    vector<int> answer;
    
    for(int i = 0; i<Psize; i++){
        int tmp = 0;
        for(int j = i+1; j<Psize; j++){
            tmp++;
            if (prices[i] > prices[j])
                break;
        }
        answer.push_back(tmp);
    }
    return answer;
}