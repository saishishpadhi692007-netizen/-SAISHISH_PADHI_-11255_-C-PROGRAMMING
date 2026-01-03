
#include <stdio.h>
int factorial(){
    long long int num;
    printf("Enter number: ");
    scanf("%lld",&num);
    int fact=1;
    for(int i=1;i<=num;i++){
        fact *= i;
    }
    return fact;
    }
    int main(){
        int d = factorial();
        printf("Factorial of number: %d\n",d);
        return 0;

    }
