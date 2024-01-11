#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Enter the elements into array-\n");

    int arr[4][4][4];

    for (int m = 0; m < 2; m++)
    {
        for (int n = 0; n < 2; n++)
        {
            for (int o = 0; o < 2; o++)
            {
                scanf("%d",&arr[m][n][o]);
            }
        }
    }
    
    for (int m = 0; m < 2; m++)
    {
        printf("\n%d - matrix\n",m+1);
        for (int n = 0; n < 2; n++)
        {
            for (int o = 0; o < 2; o++)
            {
                printf(" %d",arr[m][n][o]);
            }
            printf("\n");
        }
        printf("\n\n");        
    }
    
    return 0;
}
