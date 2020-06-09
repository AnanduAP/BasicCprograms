#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int number;
    printf("Enter day number");
    scanf("%d",&number);
    switch (number)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid Entry");
    }
    return EXIT_SUCCESS;
}