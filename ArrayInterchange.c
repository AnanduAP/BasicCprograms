#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int size,array1[100],array2[100],temp[100],i;
    printf("Enter the size of the arrray :");
    scanf("%d",&size);
    printf("Enter the values of Array 1: ");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Enter the values of Array 2: ");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&array2[i]);
    }
    for ( i = 0; i < size; i++)
    {
        temp[i]=array1[i];
        array1[i]=array2[i];
        array2[i]=temp[i];                   /* code for swapping  */
    }
    printf("Arrays after swapping\n");
    printf("Array 1 becomes\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d\t",array1[i]);
    }
    printf("\n");
    printf("Array 2 becomes\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d\t",array2[i]);
    }   
    return EXIT_SUCCESS;
}