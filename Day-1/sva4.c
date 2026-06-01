#Write a program to count digits in a number.
#include<stdio.h>
int main()
{
    long long n;
    int count; 
    printf("enter any integer:");
    scanf("lld",&n);
    count=0;
    do {
        n=n/10;
        count++; }
        while(n!=0);
        printf("number of digits:%d",count);
        return 0;
}