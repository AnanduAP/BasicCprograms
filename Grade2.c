#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int total;
    printf("Enter percentage of mark obtained");
    scanf("%d",&total);
    if (total < 0 || total> 100)
    {
        printf("Enter a valid percentage");
    }
    else if (total>=90)
    {
        printf("A grade");
    }
    else if (total>=80 && total<=89)
    {
        printf("B grade");
    }
    else if (total>=70 && total<=79)
    {
        printf("C grade");
    }
    else if (total>=60 && total<=69)
    {
        printf("D grade");
    }
    else if (total>=50 && total<=59)
    {
        printf("E grade");
    }
    else
    {
        printf("Failed");
    }
    return EXIT_SUCCESS;
}