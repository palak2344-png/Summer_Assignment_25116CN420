//Write a program to create mini library system.
#include <stdio.h>
#include <string.h>

int main() {
    int id[100], n = 0, choice, i, searchId;
    char title[100][50], author[100][50];

    do {
        printf("\n Mini Library Management System \n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &id[n]);

                printf("Enter Book Title: ");
                scanf("%s", title[n]);

                printf("Enter Author Name: ");
                scanf("%s", author[n]);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\nID\tTitle\t\tAuthor\n");
                    for(i = 0; i < n; i++) {
                        printf("%d\t%-10s\t%-10s\n", id[i], title[i], author[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(id[i] == searchId) {
                        printf("\nBook Found!\n");
                        printf("Book ID   : %d\n", id[i]);
                        printf("Title     : %s\n", title[i]);
                        printf("Author    : %s\n", author[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Book Not Found!\n");
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