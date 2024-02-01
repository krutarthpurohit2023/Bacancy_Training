//printing string using '#' operator (stringizing operator)

#include <stdio.h>

#define PRINT_STR(X) #X

void main()
{
    printf(PRINT_STR(Hello I am Krutarth));
}