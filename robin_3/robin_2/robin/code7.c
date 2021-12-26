/*===================={to implement the binary search in array}====================*/
#include <stdio.h>

int main()
{
    int start, mid, end, key, n, ctr;
    ctr = 0;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    int arr[100];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search\n");
    scanf("%d", &key);
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            printf("Element %d found at index location %d\n", key, mid);
            ctr++;
            break;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    if (ctr == 0)
    {
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}
