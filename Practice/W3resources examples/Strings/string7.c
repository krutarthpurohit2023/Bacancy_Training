#include <stdio.h>
#define _START main

int _START()
{
    char str_1[25];
    int number_count = 0, alphabet_count = 0, specialChar_count = 0;
    int variable_1 = 0;

    printf("Enter the sting: ");
    scanf("%s[^\n]",str_1);

    while (str_1[variable_1] != '\0' )
    {
        //count the number of alphabets if the paticular stiring character lie in the range of ASCII alphabet
        if((str_1[variable_1] >= 'a' &&  str_1[variable_1] <= 'z') || (str_1[variable_1] >= 'A' &&  str_1[variable_1] <= 'Z'))
        alphabet_count++;
        
        //ASCII value for special characters are taken from internet
        else if((str_1[variable_1] >= 32 && str_1[variable_1] <= 47) || (str_1[variable_1] >=58 && str_1[variable_1] <= 64) || (str_1[variable_1] >=91 && str_1[variable_1] <= 96) || (str_1[variable_1] >=123 && str_1[variable_1] <= 126))
        specialChar_count++;

        //count the numbers present in the string
        else
        number_count++;

        variable_1++;
    }
    
    printf("The entered string \'%s\' has \n%d alphabet(s)\n%d special character(s)\n%d number(s)",str_1, alphabet_count, specialChar_count, number_count);

}