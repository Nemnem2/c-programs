#include <stdio.h>

int main() {
    int num;
    printf("Please enter a number\n");
    scanf("%d",&num);
    if (num == 0)
    {
        printf("You entered a zero number\n");
    }
    else if (num > 0)
    {
        printf("This number is a positve number\n");
    }
    else
    {
        printf("This number is a negative number\n");
    }

    return 0;
}