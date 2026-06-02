//Write a program to check whether a number is prime.
#include<stdio.h>
int main()
{
    int n,i,count;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<=1){
        count=o;
    }
    else{
    for(i=2; i*i<=n; i++){
        if(n%i==0){
            count=0;
            break;
        

        }
      }
    }
    if (count==1){
        printf("%d is a prime number.",n);
    }
    else {
        printf("%d is not a prime number.",n);
    }
    return 0;
}