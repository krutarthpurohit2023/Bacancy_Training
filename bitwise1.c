#include "stdio.h"
#include "myfile.h"

int main(){

    int a1[3]={0,1,1};
    int b1[3]={1,1,0};
    int c1[3];

    for (int i = 0; i < 3; i++)
    {
        c1[i]=a1[i]&b1[i];
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",c1[i]);
    }
    
}