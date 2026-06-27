//Write a program to create marksheet generation system.
#include <stdio.h>

int main() {
    char name[30];
    int roll, i;
    float marks[5], total = 0, percentage;

    printf("Marksheet Generation System \n");

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(i = 0; i < 5; i++) {
        printf("Enter marks of Subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        total = total + marks[i];
    }

    percentage = total / 5;

    printf("\n MARKSHEET \n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", roll);

    printf("\nSubject\tMarks\n");

    for(i = 0; i < 5; i++) {
        printf("%d\t%.2f\n", i + 1, marks[i]);
    }

    printf("\nTotal Marks = %.2f", total);
    printf("\nPercentage = %.2f%%", percentage);

    if(percentage >= 80)
        printf("\nGrade: A");
    else if(percentage >= 60)
        printf("\nGrade: B");
    else if(percentage >= 40)
        printf("\nGrade: C");
    else
        printf("\nGrade: Fail");

    return 0;
}