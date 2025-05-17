#include <stdio.h>

int main() {
    int arr[5] = {10, 25, 5, 60, 30};  
    int i, sum = 0;
    float avg;
    for (i = 0; i < 5; i++) {
        sum += arr[i];  
        }
    avg = (float)sum / 5;
    printf("Sum of the array: %d\n", sum);
    printf("Average of the array: %.2f\n", avg);

    return 0;
}
