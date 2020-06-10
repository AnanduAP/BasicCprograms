#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int limit,i,sum=0;
    printf("Enter a limit");
    scanf("%d",&limit);
    for ( i = 1; i <=limit; i+=2)
    {
        sum=sum+i;
    }
    printf("Sum Of odd numbers = %d",sum);
    return EXIT_SUCCESS;
}