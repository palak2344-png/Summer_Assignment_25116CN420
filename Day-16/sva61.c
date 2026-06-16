//WAP to find the missing number in an array.
#include<stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 5;
    int total = (n + 1) * (n + 2) / 2; 
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Missing number: %d\n", total - sum);

    return 0;
}