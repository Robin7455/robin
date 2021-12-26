/*===================={to check wheather the string is palindrome or not}====================*/
#include <stdio.h>
#include <string.h>

void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);
}

int main()
{
    isPalindrome("abcba");
    isPalindrome("abbc");
    isPalindrome("abcbbbcba");
    return 0;
}
