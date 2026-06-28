//Write a program to create ticket booking system.
#include <stdio.h>

int main()
{
    int total = 100;
    int choice, ticket;

    do
    {
        printf("\n Ticket Booking System ");
        printf("\n1. Book Ticket");
        printf("\n2. Cancel Ticket");
        printf("\n3. Available Tickets");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of tickets: ");
                scanf("%d", &ticket);

                if(ticket <= total)
                {
                    total = total - ticket;
                    printf("Ticket booked successfully.\n");
                }
                else
                {
                    printf("Tickets not available.\n");
                }
                break;

            case 2:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &ticket);

                total = total + ticket;
                printf("Ticket cancelled successfully.\n");
                break;

            case 3:
                printf("Available Tickets = %d\n", total);
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