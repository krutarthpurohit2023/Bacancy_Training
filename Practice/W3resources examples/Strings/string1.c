#include <stdio.h>
#define _START main

void print(char str_2[])
{
    printf("\nEntered string: %s",str_2);
}

void process(void)
{
    char str_1[10];
    printf("Enter a string: ");
    scanf("%[^\n]s",str_1);

    print(str_1);
}

void _START()
{   
    process();
}