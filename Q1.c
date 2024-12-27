// occurance of the given character in the string

#include <stdio.h>

int main()
{

    char str[40], chara;
    int count = 0;

    printf("Enter your string: ");
    scanf("%[^\n]", str);

    printf("Enter the character you want to find the occurance: ");
    scanf("%c", &chara);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == chara)
        {
            count++;
        }
    }

    printf("\nThe character %c has come %d in the string", chara, count);

    return 0;
}