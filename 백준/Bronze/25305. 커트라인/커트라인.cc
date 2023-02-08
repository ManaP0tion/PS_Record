#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int applier, cutline;
    cin >> applier;
    cin >> cutline;

    int score[applier];
    for(int i=0; i<applier; i++){
        cin >> score[i];
    }
    sort(score, score+applier, greater<>()); //내림차순 정렬
    cout << score[cutline-1];
}