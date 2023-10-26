
#include <stdio.h>

int main()
{
    int i;
    int num;
    int sum = 0;
    float avg;
    printf("Please enter 10 numbers\n");
    for (i=0;i<10;i++)
    {
        scanf("%d",&num);
        sum += num;
    }
    avg = sum/10.0;
    printf("sum: %d\n", sum);
    printf("avg: %f\n", avg);
    
}

