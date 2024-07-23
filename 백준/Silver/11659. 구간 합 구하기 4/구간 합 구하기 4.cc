#include <iostream>
using namespace std;

int arr[100001] = {0, };

void fastIO(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int main(){
    fastIO();
    int N, M;
    cin >> N >> M;


    for(int i=1; i<=N; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }

    int a=0, b=0;
    for(int i=0; i<M; i++){
        cin >> a >> b;
        cout << arr[b]-arr[a-1] << "\n";
    }
}