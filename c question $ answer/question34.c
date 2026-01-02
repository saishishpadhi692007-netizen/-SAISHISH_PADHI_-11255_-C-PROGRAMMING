// write a c program to read 5 integer into an array and prnt them.
#include <stdio.h>

int main() {
    int arr[5], i;
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("You entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
