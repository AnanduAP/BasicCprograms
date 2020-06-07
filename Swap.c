#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b,temp;
    printf("Enter A"); 
    scanf("%d",&a);
    printf("Enter B");
    scanf("%d",&b);
    temp=a;   /* else a=a+b; */
    a=b;      /* b=a-b; */
    b=temp;   /* a=a-b; */
    printf("Swapped Result \n A : %d B :%d",a,b);
    return EXIT_SUCCESS;
}