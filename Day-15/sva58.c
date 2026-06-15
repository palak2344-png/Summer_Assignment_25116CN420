//Write a program to rotate array left.
#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store first element
    int first = arr[0];

    // Shift elements to the left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Place first element at the end
    arr[n - 1] = first;

    printf("Array after left rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}