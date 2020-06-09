#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int i,limit;
    printf("Enter the limit");
    scanf("%d",&limit);
    printf("Even numbers are\n");
    for( i = 0; i < limit; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }   
    }
    return EXIT_SUCCESS;
}