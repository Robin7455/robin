/*===================={to implementation of linear search in array}====================*/
#include <stdio.h>

int LinearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 4, 67, 54, 89};
    int element;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the element you want to search\n");
    scanf("%d", &element);
    int ls = LinearSearch(arr, size, element);
    if (ls == -1)
    {
        printf("The element %d is not present in the array\n", element);
    }
    else
    {
        printf("The element %d is present at index location %d", element, ls);
    }
    return 0;
}
