/*===================={program to compare two string }====================*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[100];
    printf("Enter the first string\n ");
    gets(s1);
    printf("Enter the second string\n ");
    gets(s2);
    int a = strcmp(s1, s2);
    printf("Displaying the result\n");
    printf("%d\n", a);
    if (a > 0)
        printf("S1 is greater than S2");
    else if (a == 0)
        printf("Both strings are equal");
    else
        printf("S2 is greater than S1");
    return 0;
}
