
#include <stdio.h>

int main()
{
    int i;
    char name[25];
    printf("name:\n");
    scanf("%s",name);
    printf("Output:\n");
    for (i=0;i<10;i++)
    {
        printf("%s\n",name);
    }
}

