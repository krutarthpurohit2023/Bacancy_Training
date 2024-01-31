#include <stdio.h>

#define MAX 3

int main()
{
    int arr[10], new_arr[10];
    int variable_1,variable_2, variable_3, sum=0;
    for (variable_1 = 0; variable_1 < 3; variable_1++)
    {
        printf("Enter the %d elements into the array- ",variable_1+1);
        scanf("%d",&arr[variable_1]);
    } 
    
    for ( variable_2 = 0, variable_3 = 0; variable_2< MAX, variable_3<MAX; variable_2++, variable_3++)
    {
       new_arr[variable_2] = arr[variable_3];
    }

    printf("\nThe new array is: ");
    for (variable_1 = 0; variable_1 < MAX; variable_1++)
    {
        printf(" %d ",new_arr[variable_1]);
    } 
    
    
}