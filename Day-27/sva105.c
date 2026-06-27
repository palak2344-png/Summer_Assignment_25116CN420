//Write a program to create student record management system.
#include <stdio.h>

int main() {
    int roll[100], n, i;
    char name[100][30];
    float marks[100];

    printf("Student Record Management System\n");

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\nStudent Records\n");
    printf("Roll No.\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}