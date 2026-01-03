
// caluclate the bill of total 5 items
#include <stdio.h>
int main(){

    int item ;
    float total=0.0,price;

    for(item=1; item<=5; item++){
        
        printf("Enter price of item %d: ",item);
        scanf("%f",&price);
        total+= price;
    }
    printf("Total Bill = %.2f\n",total);
    return 0;
}
