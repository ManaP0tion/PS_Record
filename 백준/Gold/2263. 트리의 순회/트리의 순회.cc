#include <iostream>
using namespace std;
#define MAX 100001

int preorder[MAX];
int inorder[MAX];
int postorder[MAX];
int Index[MAX];

void PrintPreOrder(int in_start, int in_end, int post_start, int post_end){
    if(in_start > in_end || post_start > post_end){
        return;
    }

    int rootIndex = Index[postorder[post_end]];
    int leftLength = rootIndex - in_start;
    int rightLength = in_end - rootIndex;
    cout << inorder[rootIndex] << " ";

    PrintPreOrder(in_start, rootIndex - 1, post_start, post_start+leftLength - 1);
    PrintPreOrder(rootIndex+1, in_end, post_end - rightLength, post_end - 1);
}



int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> inorder[i];
        Index[inorder[i]] = i;
    }

    for(int i=0; i<n; i++)
        cin >> postorder[i];
    PrintPreOrder(0, n-1, 0, n-1);
}