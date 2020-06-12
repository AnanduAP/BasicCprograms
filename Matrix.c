#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int matrix[3][3],i,j;
    printf("Enter the matrix values");
    for ( i = 0; i < 3; i++)            /*for rows*/
    {
        for ( j = 0; j < 3; j++)        /*for cloumns*/
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Entered values are:\n");
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}