#include <stdio.h>
#define _START main

int _START()
{
    char str_1[25];
    int vovel_count=0, consonent_count=0;
    int variable_1 = 0;

    printf("Enter the sting: ");
    scanf("%s[^\n]",str_1);

    while (str_1[variable_1] != '\0' )
    {
        //count the number of alphabets if the paticular stiring character lie in the range of ASCII alphabet
        if(str_1[variable_1] == 'a' ||  str_1[variable_1] == 'e' || str_1[variable_1] == 'i' ||  str_1[variable_1] == 'o'|| str_1[variable_1] == 'u' || str_1[variable_1] == 'A' ||  str_1[variable_1] == 'E' || str_1[variable_1] == 'I' ||  str_1[variable_1] == 'O'|| str_1[variable_1] == 'U')
        vovel_count++;

        else
        consonent_count++;

        variable_1++;
    }
    
    printf("The entered string \'%s\' has \n%d vovels(s)\n%d consonent(s)",str_1, vovel_count, consonent_count);

}