#include <stdio.h>
#define MAX 5
int main()
{
    int array_1[MAX], odd_array[MAX], even_array[MAX];
    int variable_1,variable_2, variable_3;
    
    for (variable_1 = 0; variable_1 < MAX; variable_1++)
    {
        printf("Enter the %d elements into the array- ",variable_1+1);
        scanf("%d",&array_1[variable_1]);
    } 
    
    
    for ( variable_1= 0,variable_2= 0, variable_3= 0; variable_1 < MAX; variable_1++)
    {
            if(array_1[variable_1] & 1)
            {
                odd_array[variable_2] = array_1[variable_1];
                variable_2++;
            }
            else
            {
                even_array[variable_3] = array_1[variable_1];
                variable_3++;
            }   
    }

    printf("\nOdd Elemets: ");
    for ( variable_1 = 0; variable_1 < variable_2; variable_1++)
    {
        printf(" %d ",odd_array[variable_1]);
    }
    printf("\nEven Elemets: ");
    for ( variable_1 = 0; variable_1 < variable_3; variable_1++)
    {
        printf(" %d ",even_array[variable_1]);
    }
   
}
