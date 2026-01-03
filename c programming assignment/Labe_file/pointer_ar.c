
#include <stdio.h>

int max(int *a, int *b);

int main() {
    int x, y;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    printf("Maximum number is: %d\n", max(&x, &y));

    return 0;
}

int max(int *a, int *b) {
    if (*a > *b)
        return *a;
    else
        return *b;
}
