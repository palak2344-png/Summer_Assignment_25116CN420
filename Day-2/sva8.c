#Write a program to check whether a number is palindrome.
#include<stdio.h>
int main()
{
    int n,original,rem,reverse=0;
    printf("enter a number:");
    scanf("%d",&n);
    original=n;
    if(n<0){
        n=-n;
    }
    while(n>0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    if(original==reverse){
        printf("the number is palindrome");
    }
    else{
        printf("the number is not palindrome");
    }
    return 0;
}

