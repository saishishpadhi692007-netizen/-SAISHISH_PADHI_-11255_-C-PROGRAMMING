#include <stdio.h>
int main(){

    int color;
    printf("Enter your color(1 for red,2 for yellow.3 for green):");
    scanf("%d",&color);

    switch (color){
        case 1:
             printf("Red=Stop\n");
             break;

        case 2:
             printf("Yellow=Wait\n");
             break;

        case 3:
             printf("Green=Go\n");
             break;

        default:
             printf("Invalid color\n");
             break;
    }
    return 0;
}