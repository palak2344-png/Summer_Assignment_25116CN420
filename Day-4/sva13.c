//Write a program to generate fibonacci series.
#include<stdio.h>
int main()
{
    int n,i,t1,t2,nt;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    t1=0;
    t2=1;
    nt=t1+t2;
    printf("Fibonacci Series: %d, %d, ",t1,t2);

    for(i=3;i<=n;i++){
        printf("%d, ",nt);
        t1=t2;
        t2=nt;
        nt=t1+t2;
    }
    return 0;
}