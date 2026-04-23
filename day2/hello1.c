#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Consonants: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (isalpha(ch) &&
            ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
        {
            printf("%c ", str[i]);
        }
    }

    return 0;
}