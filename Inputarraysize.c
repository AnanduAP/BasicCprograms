#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int limit,i,a[100];
    printf("Enter the size of the array");
    scanf("%d",&limit);
    printf("Enter array values");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < limit; i++)
    {
        printf("%d \t",a[i]);
    }
    return EXIT_SUCCESS;
}