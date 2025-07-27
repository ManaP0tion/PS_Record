#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 1e9;

int main(){
    int v, e;
    cin >> v >> e;

    vector<vector<int>> dist(v+1, vector<int>(v+1, INF));

    for(int i=0; i<=v; i++)
        dist[i][i] = 0;

    for(int i = 0; i<e; i++){
        int a, b, c;
        cin >> a >> b >> c;
        dist[a][b] = min(dist[a][b], c);
    }

    for(int k = 1; k<=v; k++){
        for(int i = 1; i<=v; i++){
            for(int j = 1; j<=v; j++){
                if(dist[i][k] != INF && dist[k][j] != INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for(int i = 1; i<=v; i++){
        for(int j = 1; j <= v; j++)
            if(dist[i][j] == INF) cout << "0" << " ";
            else cout << dist[i][j] << " ";

        cout << "\n";
    }

    
}