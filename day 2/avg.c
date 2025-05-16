#include <stdio.h>

int main() {
    float mark1, mark2, mark3, mark4, mark5, total, average;
    printf("Enter marks for 5 subjects: ");
    scanf("%f %f %f %f %f", &mark1, &mark2, &mark3, &mark4, &mark5);
    total = mark1 + mark2 + mark3 + mark4 + mark5;
    average = total / 5;
    printf("Total Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}
