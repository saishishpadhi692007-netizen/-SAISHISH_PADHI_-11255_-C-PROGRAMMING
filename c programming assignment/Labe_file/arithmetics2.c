
#include <stdio.h>
int main(){
    int i,j;
    for (i=1; i<=5; i++){
        j=1;
        while(j<=i){
            printf("* ");
            j++;
        }
        printf("\n");
    }
    return 0;

}
