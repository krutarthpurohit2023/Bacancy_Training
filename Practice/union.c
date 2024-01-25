#include <stdio.h>

// union student
// {
//     int age;
//     char name[10];
//     int id_no; 
// };
struct student_of_struct
{
    int age;
    char name[10];
    int id_no; 
}__attribute((packed)) __;


int main()
{
   // union student f1;
    struct student_of_struct f2;

    // printf("\n %d",sizeof(f1));
    // printf("\n %d",sizeof(struct student_of_struct));
    // printf("\n %d",sizeof(f2.age));
    // printf("\n %d",sizeof(f2.name));
    // printf("\n %d",sizeof(f2.id_no));

    struct student_of_struct *ptr = &f2;
    ptr->age = 20050;
    printf("%d", ptr->age);
}