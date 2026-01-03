#include <stdio.h>
int main(){

    int emp_no,age,emp_ab=0;
    

    for(emp_no=1; emp_no<=10; emp_no++){
        
        printf("Enter age of employee %d: ",emp_no);
        scanf("%d",&age);
        if(age>=30){
            emp_ab+= 1;
            
        }
        
    }
    printf("Employees aged 30 or above =%d\n",emp_ab);
    return 0;
}