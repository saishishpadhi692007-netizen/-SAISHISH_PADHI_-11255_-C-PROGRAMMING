
#include <stdio.h>
int main(){

    int sub1,sub2,sub3,total,avg;
    printf("Enter your marks:");
    scanf("%d %d %d",&sub1,&sub2,&sub3);
    total=sub1+sub2+sub3;
    avg=total/3;
    printf("Total marks:%d\n",total);
    printf("Average marks:%d\n",avg);

    if (avg >= 90){
        printf("Grade A");
    }
    else if (avg < 90 && avg >= 75){
        printf("Grade B");
    }
    else if (avg < 75 && avg >= 50){
        printf("Grade C");
    }
    else{
        printf("Grade F");
    }
    return 0;
}
