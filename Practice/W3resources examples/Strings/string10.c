#include <stdio.h>
#define _START main

int _START()
{
    char str_1[25];
    int variable_1=0, variable_2=0, length_string_1=0, count=0;

    printf("Enter the string - 1: ");
    scanf("%[^\n]s",&str_1);
    
    while (str_1[length_string_1] != '\0')
    {
        length_string_1++;
    }
    
    for(variable_1 = 0; variable_1 < length_string_1 ; variable_1++)
    {
        count = 0;
        for (variable_2 = 0; variable_2 < length_string_1; variable_2++)
        {
            if( variable_1 != variable_2 )
            {
                if(str_1[variable_1] == str_1[variable_2])
                count++;
            }
        }
        printf("\n%c occured %d times",str_1[variable_1],count);
    }
}