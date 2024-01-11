#include <stdio.h>
int main(){

int a=10,b=20;
printf("a=%d and b= %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\na=%d and b= %d",a,b);

}