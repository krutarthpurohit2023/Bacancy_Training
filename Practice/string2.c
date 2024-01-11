#include <stdio.h>


int main(){

    const char *arr[] = {"Krutarth", "Hemang", "Purohit"};

    for (int i = 0; i < 3; i++)
        printf("%s ",arr[i]);
    
    arr[1] = "Krutarth\n";

    for (int i = 0; i < 3; i++)
        printf("%s ",arr[i]);
    
}