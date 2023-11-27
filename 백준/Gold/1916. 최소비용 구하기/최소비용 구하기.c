#include <stdio.h>
#define MAX 1001
#define INFI 999999999

// 출발지서 각 도시간 최소 비용
int D[MAX];

// 방문기록
int Visited[MAX];
int Map[MAX][MAX];

void Dijkstra (int maxV, int startV, int destV) {
	// 최소 거리를 INFI로 초기화
	for (int i = 1; i <= maxV; i++) {
		D[i] = INFI;
	}
	
	// 출발지 거리 초기화
	D[startV] = 0;
	
	// 출발지에서 모든 정점을 체크
	for (int i = 1; i <= maxV; i++) {
		// 최소값 초기화
		int min = INFI;
		
		// 가중치가 가장 작은 값 구학
		for (int j = 1; j <= maxV; j++) {
			if (!Visited[j] && min > D[j]) {
				min = D[j];
				startV = j;
			}
		}
		
		// 방문 표시
		Visited[startV] = 1;
		
		// 인접 정점 체크
		for (int nextV = 1; nextV <= maxV; nextV++) {
			// 이동 가능하고, 출발지에서 K 까지의 총비용 > 출발지에서 v를 거쳐 k까지 가는 총
			if (Map[startV][nextV] != INFI && D[nextV] > D[startV] + Map[startV][nextV]) {
				D[nextV] = D[startV] + Map[startV][nextV];
			}
		}
	}
	
	printf("%d\n", D[destV]);
}

void initMap () {
	for (int y = 0; y < MAX; y++) {
		for (int x = 0; x < MAX; x++) {
			Map[y][x] = INFI;
		}
	}
}

int main(void) {
	// 변수 선언
	int S = 0;
	int D = 0;
	int N = 0;
	int M = 0;
	
	// INFI로 맵 초기화
	initMap();
	
	// 입력 시작
	scanf("%d", &N);
	scanf("%d", &M);
	
	for (int i = 0; i < M; i++) {
		int s = 0;
		int d = 0;
		int w = 0;
		
		scanf("%d %d %d", &s, &d, &w);
		if (Map[s][d] > w) {
			Map[s][d] = w;
		}
	}
	
	scanf("%d %d", &S, &D);
	
	Dijkstra(N, S, D);
	
	return 0;
}
