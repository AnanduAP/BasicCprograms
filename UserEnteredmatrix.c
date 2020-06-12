#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int matrix[100][100],i,j,rows,cloumns;
    printf("Enter the number of rows");
    scanf("%d",&rows);
     printf("Enter the number of columns");
    scanf("%d",&cloumns);
    printf("Enter the matrix values");
    for ( i = 0; i < rows; i++)            /*for rows*/
    {
        for ( j = 0; j < cloumns; j++)        /*for cloumns*/
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Entered values are:\n");
    for ( i = 0; i < rows; i++)
    {
        for (j = 0; j < cloumns; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}