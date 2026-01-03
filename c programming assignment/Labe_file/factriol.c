
#include <stdio.h>

void factorial(int *n, long long *fact);

int main() {
    int num;
    long long fact;

    printf("Enter a number:\n");
    scanf("%d", &num);

    factorial(&num, &fact);

    printf("Factorial of %d is: %lld\n", num, fact);

    return 0;
}

void factorial(int *n, long long *fact) {
    int i;
    *fact = 1;

    for (i = 1; i <= *n; i++) {
        *fact = (*fact) * i;
    }
}
