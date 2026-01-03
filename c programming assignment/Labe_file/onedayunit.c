
#include <stdio.h>
int main(){

    int day ;
    float total=0.0,units;

    for(day=1; day<=7; day++){
        
        printf("Enter units used on day %d: ",day);
        scanf("%f",&units);
        total+= units;
    }
    printf("Total electricity units used in a week: %.2f\n",total);
    
    
    return 0;
}
