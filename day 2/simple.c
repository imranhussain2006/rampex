#include <stdio.h>

int main() {
    float p, r, t, si;

    // Get input from user
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &p, &r, &t);

    // Calculate simple interest
    si = (p * r * t) / 100;

    // Print result
    printf("Simple Interest = %.2f\n", si);

    return 0;
}
