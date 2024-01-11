#include <stdio.h>
#include <string.h>

#define NUMBER_OF_STRING 2
#define MAX_STRING_SIZE 20

int main()
{
    char arr[NUMBER_OF_STRING][MAX_STRING_SIZE] = {"Hello ", "World"};


    //  for (int i = 0; i < NUMBER_OF_STRING; i++)
    //     printf("%s",arr[i]);

    printf(arr[1]);
    
    return 0;
}