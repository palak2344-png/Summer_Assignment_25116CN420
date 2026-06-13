//WAP a program to count even and odd elements in an array.
#include<stdio.h>
int main()
{
    int arr[100],n,i,even=0,odd=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even elements in the array is: %d\n", even);
    printf("Number of odd elements in the array is: %d\n", odd);
    return 0;
}