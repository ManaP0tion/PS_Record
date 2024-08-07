#include <iostream>
using namespace std;

int arr[301][301] = {0, };

int main(){
    int r, c, x, y;
    int t_case = 0;
    cin >> r >> c;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin >> arr[i][j];
        }
    }
    cin >> t_case;
    int ans = 0;
    while(t_case--){
        ans = 0;
        cin >> r >> c >> x >> y;
        for(int i = r; i<=x; i++){
            for(int j = c; j<=y; j++){
                ans += arr[i-1][j-1];
            }
        }
        cout << ans << endl;
    }
}