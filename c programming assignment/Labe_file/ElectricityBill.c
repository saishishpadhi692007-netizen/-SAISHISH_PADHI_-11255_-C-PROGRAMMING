#include <stdio.h>
int main(){

    int units;
    float rate,Total,sub_charge;
    printf("Enter total units:");
    scanf("%d",&units);

    if (units<=100){
        rate=3.0;
    }
    else if (units>100 && units<=200){
        rate=4.0;
    }
    else{
        rate=5.0;
    }

    Total=units * rate;
    
    if (Total>1000){
        sub_charge=Total * 0.1;
    }
    Total=Total+sub_charge;
    printf("Total electricity Bill is: RS.%f\n",Total);
    return 0;
}