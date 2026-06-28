//Write a program to create library management system.
#include <stdio.h>

int id[10], n = 0;
char name[10][30];

int main()
{
    int choice, i, search, found = 0;

    while (1)
    {
        printf("\n Library Management System \n");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &id[n]);

            printf("Enter Book Name: ");
            scanf(" %[^\n]", name[n]);

            n++;
            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
                printf("No Books Available!\n");
            else
            {
                printf("\nBook List:\n");
                for (i = 0; i < n; i++)
                {
                    printf("Book ID: %d\n", id[i]);
                    printf("Book Name: %s\n", name[i]);
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &search);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (id[i] == search)
                {
                    printf("Book Found!\n");
                    printf("Book ID: %d\n", id[i]);
                    printf("Book Name: %s\n", name[i]);
                    found = 1;
                }
            }

            if (found == 0)
                printf("Book Not Found!\n");

            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}