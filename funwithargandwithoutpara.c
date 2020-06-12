#include<stdlib.h>
#include<stdio.h>
void sum(int,int);
int main(void)
{
    int a,b;
    printf("Enter two values");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return EXIT_SUCCESS;
}
void sum(int num1,int num2)
{
    int result;
    result=num1+num2;
    printf("Sum of digits is : %d",result);
}