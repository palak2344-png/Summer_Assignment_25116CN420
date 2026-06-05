//Write a program to find largest prime factor.
#include<stdio.h>
int main()
{
    int n, i, max;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            max = i;
            n = n/i;
        }
    }
    printf("Largest prime factor is: %d", max);
    return 0;
}