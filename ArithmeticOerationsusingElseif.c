#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int a,b,choice,result;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("1.Add 2.Sub 3.Mul 4.Div \n Enter your choice");
    scanf("%d",&choice);
    if (choice==1)
    {
        result=a+b;
        printf("\n Result is %d",result);
    }
    else if (choice==2)
    {
        result=a-b;
        printf("\n Result is %d",result);
    }
    else if (choice==3)
    {
        result=a*b;
        printf("\n Result is %d",result);
    }
    else if (choice==4)
    {
        result=a/b;
        printf("\n Result is %d",result);
    }
    else
    {
        printf("Hey Enter a valid option");
    }
    return EXIT_SUCCESS;
}