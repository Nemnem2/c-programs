#include <stdio.h>
int num1=10, num2=20;
void swap (void);
int main()
{
    printf ("before swap\n");
    printf("num1: %d  num2: %d\n", num1,num2);
    swap();
    printf ("after swap\n");
    printf("num1: %d  num2: %d\n", num1,num2);
}

void swap (void)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
