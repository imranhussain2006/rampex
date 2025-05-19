#include <stdio.h>
void deleteElement(int arr[], int size, int position) {
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int position = 2; 
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    deleteElement(arr, size, position);
    size--; 
    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
