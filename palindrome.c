#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0, check = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // length nikalna
    while (str[len] != '\0')
    {
        len++;
    }

    // palindrome check karna
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            check = 0;
        }
    }

    if (check == 1)
        printf(" The given string is Palindrome.");
    else
        printf("the given string is Not Palindrome.");
}