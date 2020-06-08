#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int choice;
    printf("Available smartphone brands \n 1. Apple 2.Samsung 3.Motorola 4.Sony \n Select your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("You have selected Apple");
        break;
    case 2:
        printf("You have selected Samsung");
        break;
    case 3:
        printf("You have selected Motorola");
    case 4:
        printf("You have selected Sony");
        break;
    default:
        printf("Your choosen item not present");
    }
return EXIT_SUCCESS;
}