#include<stdio.h>
#include<stdlib.h>
int sum();
int main(void)
{
    int k;
    k=sum();
    printf("Sum is %d",k);
    return EXIT_SUCCESS;
}
int sum()
{
    int num1,num2,result;
    printf("Enter two values");
    scanf("%d%d",&num1,&num2);
    result=num1+num2;
    return result;
}