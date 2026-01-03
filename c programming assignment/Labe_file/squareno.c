
#include <stdio.h>
int square(num){
    int sq = num*num;
    printf("Square of number: %d\n",sq);
    return sq;
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    square(num);
    return 0;
}
