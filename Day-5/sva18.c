//Write a program to check strong number.
#include<stdio.h>
int main()
{
    int num, temp, sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == num)
    {
        printf("%d is a strong number.\n", num);
    }
    else
    {
        printf("%d is not a strong number.\n", num);
    }
    return 0;
}