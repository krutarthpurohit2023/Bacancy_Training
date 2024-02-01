#include <stdio.h>

struct class
{
    int student_number;
    char name[20];
    int *ptr1;
};

int main()
{
    struct class div_a;
    struct class* ptr=&div_a;

    printf("Enter the name of the student: ");
    scanf("%s", ptr->name);

    printf("Entered string was: %s", ptr->name);

    return 0;
}