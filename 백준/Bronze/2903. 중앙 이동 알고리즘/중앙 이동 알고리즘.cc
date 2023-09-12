#include <stdio.h>
#include <math.h>

int main(){
    int result;
    int n;
    scanf("%d", &n);
    result = pow( pow(2,n)+1, 2);
    printf("%d", result);
}