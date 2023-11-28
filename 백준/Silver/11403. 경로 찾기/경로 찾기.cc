#include <bits/stdc++.h> 
#define MAX 100
#define INF 100000
using namespace std;
int arr[MAX][MAX];
int N;

void floyd(){
    for(int k=0; k<N; k++){
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(arr[i][k] && arr[k][j])  arr[i][j] = 1;
            }
        }
    }
}

int main(){
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> arr[i][j];
        }
    }
    
    floyd();


    for(int i = 0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}