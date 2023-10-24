
#include <stdio.h>
int Get_Max(int num1, int num2);
int main()
{
    int num1;
    int num2;
    int result;
    printf("Please enter the first number:\n");
    scanf("%d",&num1);
    printf("Please enter second number:\n");
    scanf("%d",&num2);
    result = Get_Max(num1,num2);
    printf("The maximum number is %d",result);
    return 0;
}

int Get_Max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}