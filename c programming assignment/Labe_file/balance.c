
#include <stdio.h>
int main(){
      float first_balance,second_balance,compare;
      printf("Enter first balance:");
      scanf("%f",&first_balance);
      printf("Enter second balance:");
      scanf("%f",&second_balance);

      compare= first_balance == second_balance;
      printf("Both balances are equal:%f\n",compare);
      compare= first_balance > second_balance;
      printf("First balance is greater than second balance:%f\n",compare);
      compare= first_balance < second_balance;
      printf("Second balance is greater than first balance:%f\n",compare);

      return 0;
}
