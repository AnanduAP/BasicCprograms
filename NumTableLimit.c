#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int number,limit,i;
    printf("Enter Number");
    scanf("%d",&number);
    printf("Enter the limit");
    scanf("%d",&limit);
    for ( i = 1; i <=limit; i++)
    {
        printf("%d*%d = %d \n",i,number,i*number);
    }
    return EXIT_SUCCESS;
    }