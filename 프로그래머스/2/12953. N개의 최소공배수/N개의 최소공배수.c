#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 최대 공약수
int gcd(int a, int b){
    if(b == 0)  return a;
    else return gcd(b, a%b);
}


// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int answer = 0;
    if(arr_len == 1)
        return arr[0];
    
    int g = gcd(arr[0], arr[1]);
    answer = arr[0]*arr[1] / g;
    
    if(arr_len > 2){
        for(int i = 2; i<arr_len; i++){
            g = gcd(answer, arr[i]);
            answer = arr[i]*answer / g;
        }
    }
    
    return answer;
}