#include <stdio.h>
#define MAX 5
int main()
{
    int array_1[MAX],array_2[MAX];
    int variable_1,variable_2, variable_3, count=0;
    
    for (variable_1 = 0; variable_1 < MAX; variable_1++)
    {
        printf("Enter the %d elements into the array- ",variable_1+1);
        scanf("%d",&array_1[variable_1]);
    } 
    
    for ( variable_1 = 0; variable_1 < 5; variable_1++)
    {
        count = 0;
        for (variable_2 = 0; variable_2 < 5; variable_2++)
        {
            if((array_1[variable_1] == array_1[variable_2]) && (variable_1 != variable_2))
            {
               count++;
            }
        }

        printf("\n%d element appears %d times", array_1[variable_1], count+1);
    }

}
