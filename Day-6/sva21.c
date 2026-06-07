//Write a program to convert decimal into binary.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,contri=1,ans=0,ld;
    printf("Enter decimal value: ");
    scanf("%d", &n);
    while(n>0)
    {
        ld=n%2;
        ans=ans+ld*contri;
        contri=contri*10;
        n=n/2;
    }
    printf("Binary value: %d", ans);
    return 0;
}