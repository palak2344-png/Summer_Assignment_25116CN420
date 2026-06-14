//WAP to frequency  of an element in an array.
#include<stdio.h>
int main()
{
    int n, i, count = 0, element;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to find its frequency: ");
    scanf("%d", &element);
    
    for(i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            count++;
        }
    }
    
    printf("The frequency of %d is: %d\n", element, count);
    
    return 0;
}