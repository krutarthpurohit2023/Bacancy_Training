#include <stdio.h>

void fun(int *xp1, int *xp2){
   int c = *xp1 + *xp2;
    printf("%d",c);

}

int main(){
    int a=10,b=20;
    fun(&a,&b); 
}

