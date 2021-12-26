/*===================={program to find the length of two string }====================*/
#include <stdio.h>
#include <string.h>
int strl(char *st)
{
    char *ptr = st; // points at base address
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char st[100];
    printf("Enter your string: ");
    gets(st);
    int l = strl(st);
    printf("Length of string is %d", l);

    return 0;
}
