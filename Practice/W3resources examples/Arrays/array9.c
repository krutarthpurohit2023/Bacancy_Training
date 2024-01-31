#include <stdio.h>
#define MAX 5
int main()
{
    int array_1[MAX];
    int variable_1,variable_2, variable_3;
    
    for (variable_1 = 0; variable_1 < MAX; variable_1++)
    {
        printf("Enter the %d elements into the array- ",variable_1+1);
        scanf("%d",&array_1[variable_1]);
    } 
    
    
    for ( variable_1 = 0; variable_1 < MAX; variable_1++)
    {
        for (variable_2 = variable_1 + 1; variable_2 < MAX; variable_2++)
        {
            if(array_1[variable_1] <= array_1[variable_2])
            {
                // int temp = array_1[variable_2];
                // array_1[variable_2] = array_1[variable_1];
                // array_1[variable_1] = temp;

                array_1[variable_1] = array_1[variable_1]  + array_1[variable_2];
                array_1[variable_2] = array_1[variable_1]  - array_1[variable_2];
                array_1[variable_1] = array_1[variable_1]  - array_1[variable_2]; 
            }
        }
    }
    
    printf("\nMaximum element: %d \nMinimum element: %d",array_1[0], array_1[MAX-1]);
   
}
