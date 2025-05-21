#include<stdio.h>
int sumMatrix(int a[2][2]) {
    int sum = 0;
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);  
            sum += a[i][j];  
        }
        printf("\n");  
    }

    return sum;  
}

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};  
    int totalSum = sumMatrix(a);  

    printf("Sum of matrix elements: %d\n", totalSum);  

    return 0;
}
