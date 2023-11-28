#include <stdio.h>
#include <limits.h>
#define MAX 1001
#define INF INT_MAX


int distance[MAX];      // 각 도시간 최소 비용
int visited[MAX];       // 방문여부 체크
int route[MAX][MAX];

// 인접행렬 초기화
void init(){
    for(int i = 0; i< MAX; i++){
        for(int j = 0; j<MAX; j++){
            route[i][j] = INF;
        }
    }
}

void dijkstra(int vertex, int start, int end) {
    for (int i = 1; i <= vertex; i++) 
        distance[i] = INF;

    // 출발지 거리 초기화
    distance[start] = 0;
    
    // 출발지에서 모든 정점을 체크
    for (int i = 1; i <= vertex; i++) {
        // 최소값 초기화
        int min = INF;
        
        // 가중치가 가장 작은 값 구하기
        for (int j = 1; j <= vertex; j++) {
            if (!visited[j] && min > distance[j]) {
                min = distance[j];
                start = j;
            }
        }
        
        // 방문 표시
        visited[start] = 1;
        
        // 인접 정점 체크
        for (int nextV = 1; nextV <= vertex; nextV++) {
            // 이동 가능하고, 출발지에서 k까지의 cost > 출발지에서 v를 거쳐 k까지 cost
            if (route[start][nextV] != INF && distance[nextV] > distance[start] + route[start][nextV]) {
                distance[nextV] = distance[start] + route[start][nextV];
            }
        }
    }
    
    printf("%d\n", distance[end]);
}


int main(){
    int n, m, start, end, cost;
    init();
    scanf("%d %d", &n, &m);
    for(int i = 0; i<m; i++){
        scanf("%d %d %d", &start, &end, &cost);
        if(route[start][end] > cost)
            route[start][end] = cost;
    }
    scanf("%d %d", &start, &end);
    dijkstra(n, start, end);
}