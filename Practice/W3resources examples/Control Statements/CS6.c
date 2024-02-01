#include <stdio.h>

int main()
{
    signed int number_1 = 0;
    printf("Enter the number: ");
    scanf("%d",&number_1);

    if (number_1 <= 0)
        printf("\n-1");
    else
        printf("\n1");
}