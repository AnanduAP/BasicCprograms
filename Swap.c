#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b,temp;
    printf("Enter A");
    scanf("%d",&a);
    printf("Enter B");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("Swapped Result \n A : %d B :%d",a,b);
    return EXIT_SUCCESS;
}