#include <stdio.h>

int main() {
    int arr[5] = {10, 25, 5, 60, 30}; 
    int i, min;

    min = arr[0];  
    
    for (i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];  
        }
    }

    printf("Smallest element: %d\n", min);

    return 0;
}
