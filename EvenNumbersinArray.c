#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int size,i,array[100];
    printf("Enter the size of the array");
    scanf("%d",&size);
    printf("Enter values of the array");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Number of even numbers in the given array is :");
    for ( i = 0; i < size; i++)
    {
        if (array[i]%2==0)
        {
            printf("%d\t",array[i]);
        }
    }
    return EXIT_SUCCESS;
}