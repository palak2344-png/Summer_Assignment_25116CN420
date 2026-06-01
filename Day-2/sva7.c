//Write a program to find product of digits.
#include<stdio.h>
int main()
{
    int n,rem;
    long long product=1;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<0){
        n=-n;
    }
    if(n==0){
        product=0;
    }
    else {
        while (n>0){
            rem=n%10;
            product=product*rem;
            n=n/10;
        }
    }
    printf("product of digits is %lld",product);
    return 0;
}











        return 0;


}
