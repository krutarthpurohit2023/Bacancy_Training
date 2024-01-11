#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(float *ptr){

printf("\n\n%f in function",*ptr);

}
struct man{
    float a;
}a1;

main() {

    // float *ptr = &a1.a;

    // scanf("%f", &(a1.a));

    // printf("%f",*ptr);
    // printf("%f", a1.a);

    // fun(&(a1.a));

    int i=0;
    char name[10];

    
    printf("\n\nEnter two strings- ");
    gets(name);
    int count = 0;
    

    while (name[count] != EOF )
    {
        printf("\ninside while loop 1\n");
        
        if(name[count] == ' ')
        i++;

        count++;
        
    }
    printf("words - %d\n\n", (i+1));
    

    printf("%s ", name);
    
    // int c = strcmp(name,"yes");
    // printf("%d", c);

    // while (!(strcmp(name,"yes")))
    // {
    //     printf("\n\nin while loop");
    //     scanf("%s",name);
    // }
    
}