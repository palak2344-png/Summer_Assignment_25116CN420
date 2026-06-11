//Write a program to print character pyramid.
#include<stdio.h>
int main()
{
    int i,j,k;
    char ch;
    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c",ch);
            ch++;
        }
        ch-=2;
        for(k=1;k<i;k++)
        {
            printf("%c",ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}