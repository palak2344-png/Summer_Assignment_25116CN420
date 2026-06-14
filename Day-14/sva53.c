//WAP to linear search.
#include<stdio.h>
int main()
{
    int arr[100],n,i,search,flag=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Element found at index %d",i);
    }
    else
    {
        printf("Element not found in the array");
    }
    return 0;
}