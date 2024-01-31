#include <stdio.h>
#define _START main

void _START()
{   
    char str_1[50];
    int count=0,variable_1=0;

    printf("Enter the stirng: ");
    scanf("%[^\n]s", &str_1);


    while (str_1[variable_1] != '\0')
    {
        if(str_1[variable_1] == ' ')
        count++;

        variable_1++;
    }
    printf("\nThere are %d number of words in \"%s\"",count+1,str_1);

}