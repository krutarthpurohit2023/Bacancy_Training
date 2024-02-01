#include <stdio.h>

int main()
{
    unsigned int number_1 = 0;
    printf("Enter the number: ");
    scanf("%d",&number_1);

    if (number_1 % 4)
        printf("\nThe entered year is not leap year");
    else
        printf("\nThe entered year is leap year");
    
}