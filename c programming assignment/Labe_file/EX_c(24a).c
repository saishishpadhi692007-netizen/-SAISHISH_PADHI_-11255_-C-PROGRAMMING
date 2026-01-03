#include <stdio.h>
int main(){
    int i,num;
    printf("press 1: to print table\npress 0: to exit\n");
    
    while(1){
        printf("Enter your choice:");
        scanf("%d",&i);
        if(i==1){
            printf("Enter your number:");
            scanf("%d",&num);
            for(int b=1;b<=10;b++){
                printf("%d * %d = %d\n",num,b,num*b);
            }
        }
        else if(i==0){
            printf("Exit\n");
            break;
        }
        else{
            printf("Invalid input\n");
        }
    }
    return 0;
}