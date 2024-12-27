//  split the string into words and print each word on a new line without using string function
#include <stdio.h>

int main()
{

    char str[40];

    printf("Enter your string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        // if (str[i] == ' ')
        // {
        //     printf("\n");
        // }
        printf("%c\n", str[i]);
    }

    return 0;
}

/*

#include <stdio.h>

int main()
{
    char str[40];

    printf("Enter your string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0';)
    {
        // Skip leading spaces
        if (str[i] == ' ') {
            i++;
            continue;
        }

        // If it's not the end of the string, print the word
        for (int start = i; str[i] != ' ' && str[i] != '\0'; i++) {
            // Print the current character as part of the word
            printf("%c", str[i]);
        }

        // Print a newline after each word
        printf("\n");
    }

    return 0;
}



*/