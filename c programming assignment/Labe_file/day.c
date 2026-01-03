#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=6;i++){
        if(i==1){
            printf("Monday:\n");
        }
        else if(i==2){
            printf("Tuesday:\n");
        }
        else if(i==3){
            printf("Wednesday:\n");
        }
        else if(i==4){
            printf("Thursday:\n");
        }
        else if(i==5){
            printf("Friday:\n");
        }
        else if(i==6){
            printf("Saturday:\n");
        }
        for(j=1;j<=6;j++){
              printf("    Lecture %d\n",j);
                
            }
        
    }
    return 0;
}