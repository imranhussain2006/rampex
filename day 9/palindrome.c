#include<stdio.h>

int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;  
        n = n / 10;     
    }
    return rev;
}

int main() {
    int num = 50; 
    if (num == reverse(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}
