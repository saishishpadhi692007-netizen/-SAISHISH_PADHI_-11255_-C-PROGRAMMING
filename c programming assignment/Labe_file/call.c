
#include <stdio.h>

void calculate(int *a, int *b, int *add, int *sub, int *mul, float *div);

int main() {
    int x, y, add, sub, mul;
    float div;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    calculate(&x, &y, &add, &sub, &mul, &div);

    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);

    if (y != 0)
        printf("Division: %.2f\n", div);
    else
        printf("Division not possible (division by zero)\n");

    return 0;
}

void calculate(int *a, int *b, int *add, int *sub, int *mul, float *div) {
    *add = *a + *b;
    *sub = *a - *b;
    *mul = (*a) * (*b);

    if (*b != 0)
        *div = (float)(*a) / (*b);
}
