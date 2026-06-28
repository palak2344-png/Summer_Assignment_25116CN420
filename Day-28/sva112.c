//Write a program to create contact management system.
#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][30];
    char phone[10][15];
    int choice, n = 0, i;
    char search[30];

    do
    {
        printf("\n CONTACT MANAGEMENT SYSTEM ");
        printf("\n1. Add Contact");
        printf("\n2. Display Contact");
        printf("\n3. Search Contact");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", name[n]);

                printf("Enter Phone Number: ");
                scanf("%s", phone[n]);

                n++;
                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Contacts Available!\n");
                }
                else
                {
                    printf("\nContact List:\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nName : %s", name[i]);
                        printf("\nPhone: %s\n", phone[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Name to Search: ");
                scanf(" %[^\n]", search);

                for(i = 0; i < n; i++)
                {
                    if(strcmp(name[i], search) == 0)
                    {
                        printf("Contact Found!");
                        printf("\nName : %s", name[i]);
                        printf("\nPhone: %s\n", phone[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Contact Not Found!\n");

                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
