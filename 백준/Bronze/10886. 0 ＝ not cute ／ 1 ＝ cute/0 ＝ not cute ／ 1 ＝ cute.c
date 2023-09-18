#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int count_0 = 0, count_1 = 0;

    for(int i=0; i<n; i++){
        int ans;
        scanf("%d", &ans);
        if(ans == 0){
            count_0++;
        }
        else    count_1++;
    }

    if(count_0 > count_1){
        printf("Junhee is not cute!");
    }
    else if(count_0 < count_1)
        printf("Junhee is cute!");
}