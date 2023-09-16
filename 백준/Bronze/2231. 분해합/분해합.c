#include <stdio.h>
int main(){
    int n;
    int result = 0;
    scanf("%d", &n);

    for(int i=1; i<n; i++){     
        int temp = i;
        int sum = 0;

        while(temp!=0){         
            sum += temp%10;     // 1의 자리부터 더한다
            temp = temp/10;     // 10으로 나누어 앞자리로 이동함
        }
        if(sum+i == n){         // 각자리 숫자 + 자기자신 = n
            result = i;     
            break;              // 탈출
        }
    }
    printf("%d", result);
   
}
