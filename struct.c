#include <stdio.h>

struct student  //new data type -student has been created
{
    int id;
    int marks;
    char fav_char;
}s1,s2,s3;


int main(){

struct student s1 = { 12 , 33 , 'k'};

printf("Enter the details of the student- ");
scanf("%d %d %c",&s2.id, &s2.marks ,&s2.fav_char);


printf("%d %d %c\n", s1.id, s1.marks ,s1.fav_char );
printf("%d %d %c\n", s2.id, s2.marks ,s2.fav_char );
//printf("%d %d %c\n", s3.id, s3.marks ,s3.fav_char );

}