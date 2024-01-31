#include <stdio.h>
#include <stdlib.h>

#define START main

#include <stdio.h>
#define _START main

int _START()
{
    char str_1[25], str_2[25];
    int variable_1 = 0, variable_2 = 0;

    printf("Enter the sting: ");
    scanf("%s[^\n]",str_1);
    
    while (str_1[variable_2] != '\0' )
    {
        str_2[variable_2] = str_1[variable_2];
        variable_2++;
    }
    printf("\nEntered string: %s", str_2);
        
}