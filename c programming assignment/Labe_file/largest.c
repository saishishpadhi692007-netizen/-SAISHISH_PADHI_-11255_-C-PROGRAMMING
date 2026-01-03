
#include <stdio.h>
int largest_no(num1,num2,num3){
    if(num1>=num2 && num1>num3){
        printf("%d is largest number\n",num1);
    }
    else if(num2>num1 && num2>=num3){
        printf("%d is largest\n",num2);
    }
    else if(num3>=num1 && num3>num2){
        printf("%d is largest\n",num3);
    }
    else{
        printf("All numbers are equal\n");
    }
    return 0;
}

int main(){
    int num1,num2,num3;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num3);
    largest_no(num1,num2,num3);
    return 0;
    
}
