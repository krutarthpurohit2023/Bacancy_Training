#include <stdio.h>
#define _START main

void _START()
{   
    char str_1[20];
    int count=0;

    printf("Enter the stirng: ");
    scanf("%[^\n]s", &str_1);

    while (str_1[count] != '\0')
    {
        count++;
    }
    printf("\nNo of characters in a string are: %d", count);

}