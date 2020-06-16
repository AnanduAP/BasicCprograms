#include<stdlib.h>
#include<stdio.h>
int getArray(int,int);
int displayArray(int,int);
int main(void)
{
    int array[100],size;
    printf("Enter array size");
    scanf("%d",&size);
    printf("Enter array elements");
    getArray(array[],size);
    printf("Elements inside the array are");
    displayArray(array[],size);
    return EXIT_SUCCESS;
}

getArray(int *a, int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
}

displayArrayI(int *a, int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
}