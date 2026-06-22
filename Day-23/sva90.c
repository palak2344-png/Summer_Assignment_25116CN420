//Write a program to find first repeating character.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Find first repeating character
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] > 1) {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating character found.\n");
    return 0;
}
