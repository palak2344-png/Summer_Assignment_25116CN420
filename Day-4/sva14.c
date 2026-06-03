//Write a program to find nth fibonacci term.
#include<stdio.h>
int main()
{
    int n, a = 0, b = 1, c;
    printf("Enter the term number: ");
    scanf("%d", &n);
    if (n == 1)
        printf("Fibonacci term: %d", a);
    else if (n == 2)
        printf("Fibonacci term: %d", b);
    else
    {
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci term: %d", c);
    }
    return 0;
}