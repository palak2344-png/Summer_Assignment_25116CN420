#Write a program to reverse a number.
#include<stdio.h>
int main()
{
    int n,rev=0,rem,a;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    a=n;
    if(a% 10==0){
        printf("reverse of number:%d",rev);

        while(a%10==0){
            printf("0");
                a=a/10;
        }}
    else{
    printf("reverse of number:%d",rev);
}
return 0;
}