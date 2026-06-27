//Write a program to create salary management system.
#include <stdio.h>

int main() {
    int n, i;
    float salary[100], total = 0, average;

    printf(" Salary Management System \n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salary[i]);

        total = total + salary[i];
    }

    printf("\n Salary Details \n");

    for(i = 0; i < n; i++) {
        printf("Employee %d Salary = %.2f\n", i + 1, salary[i]);
    }

    average = total / n;

    printf("\nTotal Salary = %.2f", total);
    printf("\nAverage Salary = %.2f", average);

    return 0;
}