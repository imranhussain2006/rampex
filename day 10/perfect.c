#include <stdio.h>

int isPerfect(int n) {
    int i, sum = 0;
    for(i = 1; i < n; i++) {  
        if(n % i == 0) {
            sum += i;
        }
    }

    if(sum == n) {
        return 1;  
    } else {
        return 0;  
    }
}

int main() {
    int n = 28;

    if(isPerfect(n)) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}
