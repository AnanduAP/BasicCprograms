#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
    char name[10];
    printf("Enter your name:");
    scanf("%s",name);
    printf("%s is your name",name);
    return EXIT_SUCCESS;
}