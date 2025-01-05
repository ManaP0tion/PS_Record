#include <iostream>
#include <vector>
#define MAX 10001
using namespace std;

vector<int> tree(MAX);

void PostOrder(int start, int end){
    if(start >= end)
        return;

    int root = tree[start];
    int parent = start + 1;

    while(parent < end){
        if(root < tree[parent]) break;
        parent++;
    }

    PostOrder(start+1, parent);
    PostOrder(parent, end);

    cout << root << "\n";
}

int main(){
    int idx = 0;
    int input;
    while(cin >> input)
        tree[idx++] = input;
    PostOrder(0, idx);
}