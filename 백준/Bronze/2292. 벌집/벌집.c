#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int count = 1;
    int sum = 1;
    while(n > sum){
        sum += count*6;
        count++;
    }
    printf("%d", count);
}