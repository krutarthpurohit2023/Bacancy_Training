#include <stdio.h>
#define MAX 5
int main()
{
    int arr[10], new_arr[10];
    int variable_1,variable_2, variable_3, sum=0, count=0;
    for (variable_1 = 0; variable_1 < MAX; variable_1++)
    {
        printf("Enter the %d elements into the array- ",variable_1+1);
        scanf("%d",&arr[variable_1]);
    } 
    
    for(variable_1 = 0; variable_1 < MAX ; variable_1++)
    {
        for(variable_2 = variable_1+1 ; variable_2 < MAX ; variable_2++)
        {
            if(arr[variable_1] == arr[variable_2])
            {
                count++;
                break;
            }
        }
    }
    printf("\n%d duplicate elements",count);
}
