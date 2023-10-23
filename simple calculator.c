#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result=0.0f;

    printf("Enter first number\n");
    scanf("%f",&num1);
    printf("Enter second number\n");
    scanf("%f",&num2);
    printf("Enter operation [ + - * / ]\n");
    scanf(" %c",&op);    
    switch(op)
    {
        case '+': 
            result = num1 + num2; break;
        case '-': 
            result = num1 - num2; break;
        case '*': 
            result = num1 * num2; break;
        case '/': 
            result = num1 / num2; break;
        default: 
            printf("Invalid operator"); break;
    }
    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return 0;
}