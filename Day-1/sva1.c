#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("enter a number");
    scanf("%d",&n);
    sum = 0;
    for(i=1; i<=n; ++i){
        sum +=i;
    }
        printf("the sum of first %d numbers is : %d\n",n,sum);
        return 0;


}