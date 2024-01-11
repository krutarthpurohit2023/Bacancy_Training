#include <stdio.h>
#include <string.h>

/* define simple structure */
struct {
   unsigned int age : 3;
} man;

int main() {
   
   printf("\nage = %d",man.age = 1);
   printf("\nage = %d",man.age = 5);
   printf("\nage = %d",man.age = 7);
   

   return 0;
}