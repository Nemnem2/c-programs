#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c", &c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("Character is an ALPHABET.\n");
    }
    else
    {
        printf("Character is NOT ALPHABET.\n");
    }

    return 0;
}