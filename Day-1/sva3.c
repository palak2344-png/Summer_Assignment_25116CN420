#Write a program to find factorial of a number.
#include<stdio.h>
int main()
{
    int n,i,fact;
    fact=1;
    printf("enter any number:");
    scanf("%d",&n);
    if (n<0)
        printf("error");
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("factorial of %d is %d",n,fact);
    }
    return 0;
}
