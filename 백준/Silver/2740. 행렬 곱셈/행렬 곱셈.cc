#include <iostream>
using namespace std;

int arr1[101][101];
int arr2[101][101];
int arr3[101][101];

int main(){
    int N, M, K;
    cin >> N >> M;

    for(int i=0; i<N; i++){
        for(int j = 0; j<M; j++)
            cin >> arr1[i][j];
    }

    cin >> M >> K;

    for(int i=0; i<M; i++){
        for(int j=0; j<K; j++){
            cin >> arr2[i][j];
        }
    }

    for(int i = 0; i<N; i++){
        for(int j=0; j<K; j++){
            for(int k=0; k<M; k++)
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }
}