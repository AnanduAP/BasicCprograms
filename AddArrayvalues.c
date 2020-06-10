#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int a[100],size,i,sum=0;
    printf("Enter the array size");
    scanf("%d",&size);
    printf("Enter array values");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < size; i++)
    {
        sum=sum+a[i];
        printf(" %d \t ",a[i]);
    }
    printf("\nSum of the array elements = %d",sum);
    return EXIT_SUCCESS;
}