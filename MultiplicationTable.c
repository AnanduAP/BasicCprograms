#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int number,i;
    printf("Enter Number");
    scanf("%d",&number);
    for ( i = 1; i <=10; i++)
    {
        printf("%d*%d = %d \n",i,number,i*number);
    }
    return EXIT_SUCCESS;
    }