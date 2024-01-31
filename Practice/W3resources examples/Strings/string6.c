#include <stdio.h>
#define _START main

int _START()
{
    char str_1[25], str_2[25];
    int variable_1=0, length_string_1=0, length_string_2=0,count=0;

    printf("Enter the string - 1: ");
    scanf("%[^\n]s",&str_1);
    fflush(stdin);                      // fflush(stdin) is used to clear input buffer
    printf("Enter the string - 2: ");
    scanf("%[^\n]s",&str_2);

    while (str_1[length_string_1] != '\0')
    {
        length_string_1++;
    }
    printf("\nNumber of characters in a string - 1 are: %d", length_string_1);
    while (str_2[length_string_2] != '\0')
    {
        length_string_2++;
    }
    printf("\nNumber of characters in a string - 2 are: %d\n", length_string_2);
    
    if(length_string_1 & length_string_2)
    {
        for(variable_1 = 0; variable_1<length_string_1 ; variable_1++)
        {
            if(str_1[variable_1] == str_2[variable_1])
            count++;

            else
            break;
        }
        if (count == length_string_1)
        {
            printf("\nBoth the strings are equal in length and identical");
        }
        else
            printf("\nBoth the strings are equal in length but are NOT IDENTICAL");
    }
    else
    printf("\n\nBoth strings have different length thus, not indentical as well!");

}