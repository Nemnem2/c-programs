#include <stdio.h>

int main()
{
    int num;
    printf("Please enter a number to check\n");
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}