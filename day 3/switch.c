#include <stdio.h>

int main() {
    int num = 2;

    switch(num) {
        case 1:
            printf("The number is 1.\n");
            break;
        case 2:
            printf("The number is 2.\n");
            break;
        case 3:
            printf("The number is 3.\n");
            break;
        default:
            printf("The number is not 1, 2, or 3.\n");
    }

    return 0;
}
