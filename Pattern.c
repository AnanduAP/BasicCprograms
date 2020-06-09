#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,j,size;
    printf("Enter the Size of the pattern");
    scanf("%d",&size);
    for (i=1;i<=size;i++)
    {
        for (j=0;j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}