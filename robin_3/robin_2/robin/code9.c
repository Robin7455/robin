/*===================={implement selection sort inarray}====================*/
#include <stdio.h>
int main()
{
    int arr[] = {56, 12, 8, 9, 2, 55};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Printing the original array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++)
    {
        int indexOfMin, temp;
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            {
                if (arr[j] < arr[indexOfMin])
                    indexOfMin = j;
            }
        }
        // Swap arr[indexOfMin] amd arr[i]
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
    printf("Printing the sorted array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
