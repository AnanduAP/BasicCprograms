#include<stdio.h>
#include<stdlib.h>
void sum();
int main(void)
{
    sum();
    return (0);
}
void sum()
{
    int a,b,c;
    printf("Enter two values");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
    }