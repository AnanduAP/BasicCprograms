#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int i,number;
    printf("Enter the number");
    scanf("%d",&number);
    if (number%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    
    
    return EXIT_SUCCESS;
}