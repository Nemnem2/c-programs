#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    int max;
    printf("Please enter the first number\n");
    scanf("%d",&num1);
    printf("Please enter the second number\n");
    scanf("%d",&num2);
    printf("Please enter the third number\n");
    scanf("%d",&num3);
    if ( (num1>num2) && (num1>num3))
    {
        max = num1;
    }
    else if ((num2>num1) && (num2>num3))
    {
        max = num2;
    }
    else
    {
        max = num3;
    }
    printf("The maximum number is %d\n",max);

    return 0;
}