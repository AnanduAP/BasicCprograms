#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if (num>0)
    {
        printf("%d is Positive number",num);
    }
    else
    {
        printf("%d is Negative number",num);
    }
    return EXIT_SUCCESS;
}
