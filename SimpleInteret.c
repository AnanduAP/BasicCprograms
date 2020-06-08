#include<stdlib.h>
#include<stdlib.h>
int main(void)
{
    int P;
    float R,n,SI;
    printf("Enter Pricipal amount");
    scanf("%d",&P);
    printf("What is interest rate?");
    scanf("%f",&R);
    printf("Enter number of years");
    scanf("%f",&n);
    SI=((P*R*n)/100);
    printf("Simple interest is %f",SI);
    return EXIT_SUCCESS;
}