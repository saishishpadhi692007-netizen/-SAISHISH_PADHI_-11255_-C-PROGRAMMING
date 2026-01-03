
#include <stdio.h>
int main(){

    int a,b,res;
    printf("Enter your numbers:");
    scanf("%d %d",&a,&b);
    res=a+b;
    printf("Addition of numbers:%d\n",res);
    res=a-b;
    printf("Subtraction of numbers:%d\n",res);
    res=a*b;
    printf("Multiplication of numbers:%d\n",res);
    if (a!=0){
        res=a/b;
        printf("Division of numbers:%d\n",res);
        res=a%b;
        printf("Modulus of numbers:%d\n",res);
    }
    return 0;
}
