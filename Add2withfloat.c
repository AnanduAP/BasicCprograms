#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num1;
    float num2,sum;
    printf("Enter two numbers");
    scanf("%d%f",&num1,&num2);
    sum=num1+num2;
    printf("Addition result :%f",sum);
    return EXIT_SUCCESS;
}