//WAP to find sum and average of array.
#include<stdio.h>
int main()
{
    int n, sum = 0;
    float avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    
    avg = (float)sum / n; 
    
    printf("Sum of the array: %d\n", sum);
    printf("Average of the array: %.2f\n", avg);
    
    return 0;
}