#include <stdio.h> 
#include <stdlib.h>                                                 //malloc(), calloc(), realloc(), free() can only be accessed when <stdlib.h> file is inclued

int main(){

 int *ptr, i;
 
    printf("\nEnter the values to the newly allocated memory in the heap region.\n ");
    
    ptr = (int*) malloc(3*sizeof(int));                             //crating the memory location in the heap using malloc()
    

    if(ptr == NULL){
        printf("\nSize is NOT allocated\n");
    }

    else{

        for(i = 0 ; i < 3 ; i++)                                        //initializing the values in the allocated memory
        {
            printf("\nEnter the %d element- ",i+1);
            scanf("%d",&ptr[i]);
        }
    
        printf("\nPrinting the dynamically allocated memory values- \n");//printing the values of DMA
        
        for(i = 0 ; i < 3 ; i++)                                        
            printf("\nThe %d element is- %d",i+1,ptr[i]);
        
        free(ptr);                                                      //erasing all the allocated memory so they can be reused in future

        printf("\n\n\nAfter erasing the allocated memory\n");

        for (i = 0; i < 3; i++)                                         //once the memory is eraased, it ill show the garbage values - in malloc()
            printf("\n%d", ptr[i]);                                       
    }
 
 
}
