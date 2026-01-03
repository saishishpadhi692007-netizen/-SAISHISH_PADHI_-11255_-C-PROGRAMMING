
#include <stdio.h>
int grade(sub1,sub2,sub3,sub4,sub5){
    int total,avg;
    total=sub1+sub2+sub3+sub4+sub5;
    avg=total/5;
    printf("Total marks:%d\n",total);
    printf("Average marks:%d\n",avg);

    if (avg >= 90){
        printf("Grade A\n");
    }
    else if (avg < 90 && avg >= 80){
        printf("Grade B\n");
    }
    else if (avg < 80 && avg >= 70){
        printf("Grade C\n");
    }
    else if(avg < 70 && avg >= 60){
        printf("Grade D\n");
    }
    else{
        printf("Grade F\n");
    }
    return 0;
}
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter your marks:");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    grade(sub1,sub2,sub3,sub4,sub5);
    return 0;
}
