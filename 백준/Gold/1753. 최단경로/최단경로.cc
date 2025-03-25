#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1000001;
const int MAX = 200001;
int V, E, K;

void dijkstra(int start, vector<vector<pair<int, int>>>& graph, 
vector<int>& distance){
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<>> pq;

    distance[start] = 0;
    pq.push({0, start});

    while(!pq.empty())
    {
        int dist = pq.top().first;
        int curr = pq.top().second;

        pq.pop();

        // 이전에 더 짧은 거리로 방문한 적이 있으면 pass
        if(dist > distance[curr])
            continue;

        // curr에서 갈 수 있는 모든 인접노드 확인
        vector<pair<int, int>>& edges = graph[curr];
        for(int i = 0; i<edges.size(); i++)
        {
            int next = edges[i].first;
            int weight = edges[i].second;

            int cost = dist + weight;

            if(cost < distance[next])
            {
                distance[next] = cost;
                pq.push(make_pair(cost, next));
            }
        }
    }

}

int main(){
    cin >> V >> E >> K;

    vector<vector<pair<int, int>>> graph(V + 1);
    vector<int> distance(V+1, INF);

    for(int i=0; i<E; i++){
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }

    dijkstra(K, graph, distance);


    // print
    for(int i=1; i<=V; i++){
        if(distance[i] == INF)  cout << "INF\n";
        else cout << distance[i] << "\n";
    }
}