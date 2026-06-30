//Write a program to develop complete mini project using arrays, strings and functions.
#include <stdio.h>
#include <string.h>

int id[100], n = 0;
char name[100][50];
char phone[100][15];

void addContact() {
    printf("Enter Contact ID: ");
    scanf("%d", &id[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Phone Number: ");
    scanf("%s", phone[n]);

    n++;
    printf("Contact Added Successfully!\n");
}

void displayContacts() {
    int i;

    if (n == 0) {
        printf("No contacts available.\n");
        return;
    }

    printf("\nID\tName\t\tPhone Number\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%-10s\t%s\n", id[i], name[i], phone[i]);
    }
}

void searchContact() {
    int i, searchId;

    printf("Enter Contact ID to Search: ");
    scanf("%d", &searchId);

    for (i = 0; i < n; i++) {
        if (id[i] == searchId) {
            printf("\nContact Found!\n");
            printf("ID    : %d\n", id[i]);
            printf("Name  : %s\n", name[i]);
            printf("Phone : %s\n", phone[i]);
            return;
        }
    }

    printf("Contact Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}