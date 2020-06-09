#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    float mark;
    printf("Enter your mark obtained in the maths exam out of 100");
    scanf("%f",&mark);
    if (mark>=50)
    {
        printf("Congratulations you are Passed");
    }
    else
    {
        printf("Sorry You are failed");
    }
    return EXIT_SUCCESS;
}