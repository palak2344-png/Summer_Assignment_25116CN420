//WAP to move zeroes to the end of an array.
#include<stdio.h>
#include <stdio.h>

int main() {
    int arr[] = {1, 0, 2, 0, 3, 4, 0, 5};
    int n = 8;
    int temp[n];
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[j] = arr[i];
            j++;
        }
    }

    while (j < n) {
        temp[j] = 0;
        j++;
    }

    printf("Array after moving zeroes to the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}