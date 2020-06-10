#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[100],size,i,key,flag=0;
    printf("Enter the array size");
    scanf("%d",&size);
    printf("Enter the array elements");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the search key element");
    scanf("%d",&key);
    for ( i = 0; i < size; i++)
    {
        if (a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("Key found at position %d",i+1);
    }
    else
    {
        printf("SORRY key NOT FOUND");
    } 
    return EXIT_SUCCESS;
}