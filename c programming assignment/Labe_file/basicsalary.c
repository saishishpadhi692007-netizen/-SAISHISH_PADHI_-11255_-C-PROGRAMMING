#include <stdio.h>
int main(){

    char name[20];
    float basic_salary,hra,da,gs,it,ns;;
    
    printf("Enter employee name:");
    scanf("%s", &name);
    printf("Enter basic salary of employee:");
    scanf("%f", &basic_salary);

    hra=0.20*basic_salary;
    da=0.10*basic_salary;
    gs=basic_salary+hra+da;
    it=0.050*gs;
    ns=gs-it;
    printf("House rent allowance:%f\n",hra);
    printf("Dearness allowance:%f\n",da);
    printf("Gross Salary:%f\n",gs);
    printf("Income Tax:%f\n",it);
    printf("Net Salary:%f\n",ns);
    
    return 0;
}