/*===================={to perform deletion in array}====================*/

#include <stdio.h>

int main()
{
    int arr[100], n, pos;
    printf("Enter the number of elements you want in the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Printing the original array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the position that you want to delete from the array\n");
    scanf("%d", &pos);
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n = n - 1;
    printf("Printing the new array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
