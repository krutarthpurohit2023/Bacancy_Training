#include <Stdio.h>

void search(char name[]){

    puts(name);
    char find;

    printf("\nEnter the alphabet you want to check in your name- ");
    scanf("%c",&find);

    for (int i = 0; i < 9; i++)
    {
        if(find == name[i])
        printf("\n%c is present in your name ",find);
    }

    
    
}

int main(int argc, char const *argv[])
{

    char str[10]= "Krutarth";

    search(str);    
    return 0;
}
