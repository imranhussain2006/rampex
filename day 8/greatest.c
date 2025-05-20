#include <stdio.h>

int findGreatest(int a, int b, int c) {
    int max;

    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    return max;
}

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int greatest = findGreatest(num1, num2, num3);
    printf("The greatest number is: %d\n", greatest);

    return 0;
}
