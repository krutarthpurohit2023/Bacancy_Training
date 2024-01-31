#include <stdio.h>
#define _START main

void _START()
{
    char str_1[20];
    int count=0;

    printf("Enter the stirng: ");
    scanf("%[^\n]s", &str_1);

    while (str_1[count] != '\0')            //finding the length of the string without using inbuild function
    {
        count++;
    }
    while (count != -1)                     //printing the reverse string, starting the loop from end of the sting till it reaches '0' index where 1st character is stored 
    {
        printf("%c ",str_1[count--]);
    }

}