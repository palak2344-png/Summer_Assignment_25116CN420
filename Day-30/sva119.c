//Write a program to create mini employee management system.
#include <stdio.h>

int main() {
    int id[100], age[100], n = 0, choice, i, searchId;
    char name[100][50];
    float salary[100];

    do {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &id[n]);

                printf("Enter Employee Name: ");
                scanf("%s", name[n]);

                printf("Enter Age: ");
                scanf("%d", &age[n]);

                printf("Enter Salary: ");
                scanf("%f", &salary[n]);

                n++;
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No employee records found.\n");
                } else {
                    printf("\nID\tName\t\tAge\tSalary\n");
                    for(i = 0; i < n; i++) {
                        printf("%d\t%-10s\t%d\t%.2f\n",
                               id[i], name[i], age[i], salary[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(id[i] == searchId) {
                        printf("\nEmployee Found!\n");
                        printf("ID     : %d\n", id[i]);
                        printf("Name   : %s\n", name[i]);
                        printf("Age    : %d\n", age[i]);
                        printf("Salary : %.2f\n", salary[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Employee Not Found!\n");
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