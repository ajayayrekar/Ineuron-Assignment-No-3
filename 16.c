#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalpha(c))
    {
        if (isupper(c))
            printf("%c is an uppercase alphabet.\n", c);
        else
            printf("%c is a lowercase alphabet.\n", c);
    }
    else if (isdigit(c))
        printf("%c is a digit.\n", c);
    else
        printf("%c is a special character.\n", c);

    return 0;
}
