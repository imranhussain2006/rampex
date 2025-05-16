#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Addition of %d and %d is %d\n", a, b, sum);
    printf("Arithmetic operator used: +\n");

    return 0;
}