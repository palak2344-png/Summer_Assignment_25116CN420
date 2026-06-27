//Write a program to create employment management system.
#include <stdio.h>

int main() {
    int id[100], age[100], n, i;
    char name[100][30];
    float salary[100];

    printf("Employee Management System\n");

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &id[i]);

        printf("Employee Name: ");
        scanf("%s", name[i]);

        printf("Age: ");
        scanf("%d", &age[i]);

        printf("Salary: ");
        scanf("%f", &salary[i]);
    }

    printf("\n Employee Records \n");
    printf("ID\tName\tAge\tSalary\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%.2f\n",
               id[i], name[i], age[i], salary[i]);
    }

    return 0;
}