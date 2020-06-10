#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[5],i;
    printf("Enter values inside the array");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d \t",a[i]);
    }
    return EXIT_SUCCESS;
}