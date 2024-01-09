#include <stdio.h> 
#include <stdlib.h>                                                 //malloc(), calloc(), realloc(), free() can only be accessed when <stdlib.h> file is inclued

int main(){

 int *ptr, i;
 
    printf("\nEnter the values to the newly allocated memory in the heap region.\n ");
    
    ptr = (int*) calloc(3,sizeof(int));                             //crating the memory location in the heap using calloc()
      
    for(i = 0 ; i < 8 ; i++)                                        //all the values at newly allocated memory is '0' by default in calloc() which is an overhead.
        printf("\nThe %d element is- %d",i+1,ptr[i]);
    


    for(i = 0 ; i < 3 ; i++)                                        //initializing the values in the allocated memory
    {
        printf("\nEnter the %d element- ",i+1);
        scanf("%d",&ptr[i]);
    }

   
    printf("\nPrinting the dynamically allocated memory values- \n");//printing the values of DMA
    

    for(i = 0 ; i < 8 ; i++)                                        
        printf("\nThe %d element is- %d",i+1,ptr[i]);
    

    free(ptr);                                                      //erasing all the allocated memory so they can be reused in future

    printf("\n\n\nAfter erasing the allocated memory\n");

    for (i = 0; i < 8; i++)                                         //once the memory is eraased, it will show the garbage values - in calloc()
        printf("\n%d", ptr[i]);                                       
 
 
}
