/*===================={to implement insertion sort in array}====================*/
#include <stdio.h>

int main()
{
    int arr[] = {6, 52, 67, 92, 10, 87};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Printing the original array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 1; i <= n - 1; i++)
    {
        int key, j;
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("Printing the sorted array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
