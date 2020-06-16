#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    char strings[25];
    int i,length,flag=0;
    printf("Enter the string");
    scanf("%s",strings);
    length=strlen(strings);
    for ( i = 0; i < length; i++)
    {
       if (strings[i] != strings[length-i-1])
       {
           flag=1;
           break;
       }
       
    }
    if (flag==1)
    {
        printf("String is not palindrome");
    }
    else
    {
        printf("String is palindrome");
    }
    
    return EXIT_SUCCESS;
}