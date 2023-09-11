#include <stdio.h>
#include <stack>
using namespace std;

int main(){
    int num;
    scanf("%d", &num );
    stack<int> stack1;
    

for(int i=0; i<num; i++){
    int command = 0;
    scanf("%d", &command );

    if(command == 1){
        int var = 0;
        scanf("%d", &var);
        stack1.push(var);
    }

    else if(command == 2){
        if(stack1.empty() == 0){
            printf("%d\n", stack1.top());
            stack1.pop();
        }
        else if(stack1.empty() == 1){
            printf("-1\n");
        }
    }

    else if(command == 3){
        printf("%d\n", stack1.size());
    }

    else if(command == 4){
        if(stack1.empty() == 1)
            printf("1\n");
        else
            printf("0\n");
    }

    else if(command == 5){
        if(stack1.empty() == 0)
            printf("%d\n", stack1.top());
        else
            printf("-1\n");
    }
 }
}