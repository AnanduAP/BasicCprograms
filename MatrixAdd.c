#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int i,j,rows,columns,a[50][50],b[50][50],sum[50][50];
    printf("Enter the number of rows :");
    scanf("%d",&rows);
    printf("Enter number of columns :");
    scanf("%d",&columns);
    printf("Enter the first matrix :");
    for ( i = 0; i <rows; i++)
    {
        for ( j = 0; j < columns; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix :");
    for ( i = 0; i <rows; i++)
    {
        for ( j = 0; j < columns; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < columns; j++)
        {
        sum[i][j]=a[i][j]+b[i][j];           
        }
    }
    printf("Sum of the matrixes is\n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < columns; j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}