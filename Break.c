#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Hai\n");
        if (i==3)
        {
            break;
        }
        printf("Hello\n");
    }
    return EXIT_SUCCESS;
}