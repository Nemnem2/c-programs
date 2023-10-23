#include <stdio.h>

int main() {
    char c;
    printf("Please neter a character\n");
    scanf("%c",&c);
    if ((c== 'a') || (c == 'e') || (c == 'o') || (c == 'i') || (c == 'u')){
        printf("This chaeracter is a vowel\n");
    }
    else{
        printf("This character is not a vowel\n");
    }

    return 0;
}