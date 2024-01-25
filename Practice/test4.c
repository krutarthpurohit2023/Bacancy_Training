#include <stdio.h>
#define can 1
#define man 1
int main()
{
    
    #if can
    printf("Enter if"); 
    #endif
    
    #if man
    printf("Enter else");
    #endif

}