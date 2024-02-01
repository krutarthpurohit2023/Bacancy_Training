#include <stdio.h>

int main()
{
    int number_1 = 0, number_2 = 0;
    printf("Enter two digits: ");
    scanf("%d %d",&number_1, &number_2);

    if (number_1 == number_2)
        printf("\nBoth entered digits are equal");
    else
        printf("\nThe entered digits are not equal");
    
}