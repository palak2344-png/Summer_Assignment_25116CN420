//Write a program to create bank account management system.
#include <stdio.h>

int main()
{
    int accNo, choice;
    char name[30];
    float balance = 0, amount;

    printf(" BANK ACCOUNT SYSTEM \n");

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name);

    do
    {
        printf("\n1. Deposit");
        printf("\n2. Withdraw");
        printf("\n3. Check Balance");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                balance = balance + amount;
                printf("Amount Deposited Successfully!\n");
                break;

            case 2:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if(amount <= balance)
                {
                    balance = balance - amount;
                    printf("Amount Withdrawn Successfully!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("\nAccount Number : %d", accNo);
                printf("\nAccount Holder : %s", name);
                printf("\nBalance : %.2f\n", balance);
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