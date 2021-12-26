/*===================={to insertion the element in array}====================*/
#include <stdio.h>
int main()
{
    int arr[100], n, pos, key;
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
    printf("Enter the position where you want to insert the element\n");
    scanf("%d", &pos);
    printf("Enter the element that you want to insert\n");
    scanf("%d", &key);
    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = key;
    n = n + 1;
    printf("Printing the new array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
