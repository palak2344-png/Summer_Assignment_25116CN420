//Write a program to convert binary into decimal.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,contri=1,ans=0,ld;
    printf("Enter binary value: ");
    scanf("%d", &n);
    while(n>0)
    {
        ld=n%10;
        ans=ans+ld*contri;
        contri=contri*2;
        n=n/10;
    }
    printf("Decimal value: %d", ans);
    return 0;
}