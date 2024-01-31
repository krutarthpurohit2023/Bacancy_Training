#include <stdio.h>
#define MAX 5
int main()
{
    int array_1[MAX], array_2[MAX], array_3[MAX+MAX];
    int variable_1,variable_2, variable_3, sum=0, count=0;
    
    for (variable_1 = 0; variable_1 < MAX; variable_1++)
    {
        printf("Enter the %d elements into the array- ",variable_1+1);
        scanf("%d",&array_1[variable_1]);
    } 
    
    for (variable_2 = 0; variable_2 < MAX; variable_2++)
    {
        printf("Enter the %d elements into the array- ",variable_2+1);
        scanf("%d",&array_2[variable_2]);
    }

    for (variable_3 = 0; variable_3 < (MAX); variable_3++)
    {
        array_3[variable_3] = array_1[variable_3];
    }

    for (variable_3 = MAX, variable_1 = 0; variable_3 < (MAX + MAX -1), variable_1<MAX; variable_3++, variable_1++)
    {
        array_3[variable_3] = array_2[variable_1];
    }
    
    for ( variable_1 = 0; variable_1 < 10; variable_1++)
    {
        for (variable_2 = variable_1 + 1; variable_2 < 10; variable_2++)
        {
            if(array_3[variable_1] <= array_3[variable_2])
            {
                int temp = array_3[variable_2];
                array_3[variable_2] = array_3[variable_1];
                array_3[variable_1] = temp;
            }
        }
        
    }
    for (variable_3 = 0; variable_3 < (MAX+MAX); variable_3++)
    {
        printf(" %d  ",array_3[variable_3]);
    }
    

    
}
