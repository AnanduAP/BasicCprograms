#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num1,num2;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)
    {
        printf("%d is greater",num1);
    }
    else
    {
        printf("%d is greater",num2);
    }
    return EXIT_SUCCESS;
}