#include <stdio.h>

int main()
{
    signed int number_1 = 0;
    printf("Enter the number: ");
    scanf("%d",&number_1);

    if (number_1 < 0)
        printf("\nThe entered number is negative");
    else
        printf("\nThe entered number is positive");
    
}