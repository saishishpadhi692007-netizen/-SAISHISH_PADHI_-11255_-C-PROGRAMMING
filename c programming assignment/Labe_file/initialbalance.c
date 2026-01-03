
#include <stdio.h>
int main(){

    float Initial_balance,interest,maintenance,bonus,total_amount;
    printf("Enter initial balance:");
    scanf("%f",&Initial_balance);

    interest=0.1*Initial_balance;
    Initial_balance += interest;
    printf("Balance after intrest:%f\n",Initial_balance);

    maintenance=200;
    Initial_balance -= maintenance;
    printf("Balance after maintenance charge:%f\n",Initial_balance);

    bonus=2;
    Initial_balance *= bonus;
    printf("Balance after bonus:%f\n",Initial_balance);

    total_amount=Initial_balance;
    total_amount /=2;
    printf("Total amount in each linked account:%f\n",total_amount);
    return 0;
}
