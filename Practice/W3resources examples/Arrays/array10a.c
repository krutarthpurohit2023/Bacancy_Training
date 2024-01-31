#include <stdio.h>

#define MAX 5

void process(int fun_array[MAX])
{
    int variable_1, variable_2,variable_3;
    int odd_array[MAX],even_array[MAX];

    for ( variable_1= 0,variable_2= 0, variable_3= 0; variable_1 < MAX; variable_1++)
    {
            if(fun_array[variable_1] & 1)
            {
                odd_array[variable_2] = fun_array[variable_1];
                variable_2++;
            }
            else
            {
                even_array[variable_3] = fun_array[variable_1];
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

int main()
{
    int array_1[MAX];
    int variable_1;
    
    for (variable_1 = 0; variable_1 < MAX; variable_1++)
    {
        printf("Enter the %d elements into the array- ",variable_1+1);
        scanf("%d",&array_1[variable_1]);
    } 

    process(array_1);
   
}