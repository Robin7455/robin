/*===================={print the average of n numbers in an array}====================*/
#include <stdio.h>

int main()
{
    int arr[100];
    int n, avg, sum;
    printf("Enter the number of element in the array\n");
    scanf("%d", &n);
    sum = 0;
    printf("Enter the elements in the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = sum / n;
    printf("\nThe average is %d", avg);
    return 0;
}
