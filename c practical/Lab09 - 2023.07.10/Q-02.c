#include<stdio.h>
int main()
{
    
    int n, x, sum, num, i;
    printf("Enter the size of 1 array:");
    scanf("%d", &n);
    int array[n];
    for(i=0; i<n; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &array[i]);

    } 
    printf("Enter the size of 2 array:");
    scanf("%d", &x);
    int arr[x];
    for(i=0; i<x; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &arr[i]);

        
    } 
    sum = array[i]+ arr[i];
    printf("sum %d", sum);

}