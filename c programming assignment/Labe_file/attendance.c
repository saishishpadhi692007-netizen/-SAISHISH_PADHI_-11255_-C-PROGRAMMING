
#include <stdio.h>
int main(){

    int day,attend,total=0;
    

    for(day=1; day<=30; day++){
        
        printf("DAY %d (1=present,0=absent): ",day);
        scanf("%d",&attend);
        if(attend == 1){
            total += 1;
        }
        
    }
    printf("Total present days = %d\n",total);
    return 0;
}
