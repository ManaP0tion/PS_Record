#include <iostream>
using namespace std;

int *list, *sorted;
int N, K, cnt = 0, result; 

void print_result(int result){
    if(cnt<K)
        cout << -1;
    else
        cout << result;
}

void merge(int list[], int left, int mid, int right){
    int i,j,k,l;
    i = left;
    j = mid+1;
    k = left;

    while(i<=mid && j<=right){
        if(list[i]<=list[j]) sorted[k++] = list[i++];
        else sorted[k++] = list[j++];
    }

    if(i>mid){
        for(l=j; l<=right; l++)
            sorted[k++] = list[l];
    }
    else{
        for(l=i; l<=mid; l++){
            sorted[k++] = list[l];
        }
    }

    for(l = left; l<= right; l++){
        list[l] = sorted[l];
        if(++cnt == K)
            result = list[l];
    }
}

void merge_sort(int list[], int left, int right){
    if(left < right){
        int mid = (left + right) / 2;
        merge_sort(list, left, mid);
        merge_sort(list, mid+1, right);
        merge(list, left, mid, right);
    }
}

int main(){
    cin >> N >> K;
    list = new int[N];
    sorted = new int[N];
    
    for(int i=0; i<N; i++)
        cin >> list[i];
    merge_sort(list, 0, N-1);
    print_result(result);
}