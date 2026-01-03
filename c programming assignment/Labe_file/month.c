
#include <stdio.h>
int main(){

    int month;
    printf("Enter the month(1-12):");
    scanf("%d",&month);

    switch (month){
        case 1: case 3: case 5: case 6: case 8: case 10: case 12:
          printf("No. of days in month is 31\n");
          break;
        
        case 4: case 7: case 9: case 11:
          printf("No. of days in month is 30\n");
          break;

        case 2:
          printf("No. of days in month is 28 or 29(leap year)\n");
          break;

        default:
          printf("Invalid month");
          break;
    }
    return 0;
}
