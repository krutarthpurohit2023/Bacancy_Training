#include <stdio.h>

#define MAX 3

int main()
{
    int arr[10];
    int variable_1,variable_2, sum=0;
    for (variable_1 = 0; variable_1 < 3; variable_1++)
    {
        printf("Enter the %d elements into the array- ",variable_1+1);
        scanf("%d",&arr[variable_1]);
    } 
    
    printf("The values inside an array are: ");
    for ( variable_2 = 0; variable_2< MAX; variable_2++)
    {
        sum = sum + arr[variable_2];
    }
    printf("\nSum= %d",sum);
}