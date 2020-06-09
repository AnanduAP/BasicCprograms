#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int limit,sum=0,i;
    printf("Enter the limit");
    scanf("%d",&limit);
    for ( i = 0; i <=limit; i++)
    {
        sum=sum+i;
    }
    printf("Sum of the digits are %d",sum);
    return EXIT_SUCCESS;
}