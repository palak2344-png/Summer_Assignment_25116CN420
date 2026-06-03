//Write a  program to print armstrong numbers in a range.
#include<stdio.h>
int main()
{
    int s,e,num,temp,rem,n,sum;

    printf("Enter the starting and ending range: ");
    scanf("%d%d",&s,&e);
    printf("Armstrong numbers between %d and %d are: ",s,e);

    for(num=s;num<=e;num++)
    {
        temp=num;
        n=0;
        sum=0;

        while(temp!=0)
        {
            temp/=10;
            n++;
        }
        temp=num;

        while(temp!=0)
        {
            rem=temp%10;
            sum+=pow(rem,n);
            temp/=10;
        }
        if(sum==num)
        {
            printf("%d ",num);
        }
     }
     return 0;
}