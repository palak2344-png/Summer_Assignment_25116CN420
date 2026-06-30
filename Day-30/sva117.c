//Write a program to create student record system using arrays and strings.
#include <stdio.h>
#include <string.h>

int main() {
    int roll[100], marks[100];
    char name[100][50];
    int n = 0, choice, i, searchRoll;

    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &roll[n]);

                printf("Enter Name: ");
                scanf("%s", name[n]);

                printf("Enter Marks: ");
                scanf("%d", &marks[n]);

                n++;
                printf("Student Record Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No student records found.\n");
                } else {
                    printf("\nRoll\tName\t\tMarks\n");
                    for(i = 0; i < n; i++) {
                        printf("%d\t%-10s\t%d\n", roll[i], name[i], marks[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &searchRoll);

                for(i = 0; i < n; i++) {
                    if(roll[i] == searchRoll) {
                        printf("\nStudent Found!\n");
                        printf("Roll Number: %d\n", roll[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Marks: %d\n", marks[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Student Record Not Found!\n");
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}