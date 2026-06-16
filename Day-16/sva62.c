//WAP TO FIND MAXIMUM FREQUENCY ELEMENT.
#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = 7;
    int max_freq = 0;
    int max_element = 0;

    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        if (freq > max_freq) {
            max_freq = freq;
            max_element = arr[i];
        }
    }

    printf("Element with maximum frequency: %d\n", max_element);
    printf("Maximum frequency: %d\n", max_freq);

    return 0;
}