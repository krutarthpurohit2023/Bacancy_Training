#include <stdio.h>

int main()
{
    int number_1 = 0;
    printf("Enter the number: ");
    scanf("%d",&number_1);

    if (number_1 & 1)
        printf("\nEntered digit is odd");
    else
        printf("\nEntered digit is even");
    
}