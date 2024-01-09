#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr,i;

    ptr = (int*) malloc(3 * sizeof(int));
    
    for (i = 0; i < 3; i++)
    {   
        printf("\nEnter the value- ");
        scanf("\n%d ", &ptr[i]);
    }
            
    for (i = 0; i < 3; i++)
        printf("%d ", ptr[i]);
    
    free(ptr);

    for (i = 0; i < 3; i++)
        printf("%d ", ptr[i]);

}
