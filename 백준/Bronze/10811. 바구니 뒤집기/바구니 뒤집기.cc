#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int N, M, i, j;
   cin >> N >> M;
   int *basket = new int[N+1];

   for (int i=1; i<=N; i++) 
      basket[i] = i;
   
   while(M--){
        cin >> i >> j;
        for(int k=0; k<= (j-i)/2; k++){
            swap(basket[k+i], basket[j-k]);
        }
   }
   for(int i=1; i<=N; i++){
        cout << basket[i] << " ";
   }
}