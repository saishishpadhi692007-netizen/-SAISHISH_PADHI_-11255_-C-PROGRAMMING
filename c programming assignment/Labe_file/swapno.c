
// C program to swap numbers
#include <stdio.h>

int main(){

    int x,y,res;           
    printf("Enter your numbers:");
    scanf("%d %d",&x,&y);          
    
    printf("Before swapping A:%d,B:%d\n",x,y);
    res=x;
    x=y;
    y=res;
    printf("After swapping A:%d,B:%d\n",x,y);

    return 0;

}
