#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[100],size,i,j,temp;
    printf("Enter the array size");
    scanf("%d",&size);
    printf("Enter the array elements");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < size; i++)
    {
        for ( j = i+1; j < size; j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted values are");
    for ( i = 0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }
    return EXIT_SUCCESS;
}