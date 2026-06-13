//WAP to find largest and smallest number in an array.
#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest = arr[0], smallest = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("Largest number in the array is: %d\n", largest);
    printf("Smallest number in the array is: %d\n", smallest);
    return 0;
}