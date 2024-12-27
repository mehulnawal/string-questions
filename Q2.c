// Anagram Program in C: Two strings are said to be anagrams if they satisfy two conditions, the length of both strings must be equal to each other and second the strings must have the same set of characters.

#include <stdio.h>

int main()
{
    char str[40], str2[40];
    int strLength = 0, str2Length = 0;

    printf("Enter your string 1: ");
    scanf("%[^\n]", str);

    printf("Enter your string 2: ");
    scanf(" %[^\n]", str2);

    for (int i = 0; str[i] != '\0'; i++)
    {
        strLength++;
    }

    for (int i = 0; str2[i] != '\0'; i++)
    {
        str2Length++;
    }

    printf("The length of first string is: %d\n", strLength);
    printf("The length of second string is: %d\n", str2Length);

    printf("\n");

    for (int i = 0; str[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (strLength == str2Length)
        {
            printf("The string is anagram");
            break;
        }
        else
        {
            printf("The string is not anagram");
            break;
        }
    }

    return 0;
}