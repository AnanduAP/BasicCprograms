#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    float num1,num2,num3,avg;
    printf("Enter three numbers");
    scanf("%f%f%f",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("Average : %f",avg);
    return EXIT_SUCCESS;

}