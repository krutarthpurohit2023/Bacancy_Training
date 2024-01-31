#include<stdio.h>

union class
{
    int a;
    float b;
}div_A;

int main()
{
    div_A.a = 9.0;
    printf("%d", div_A.b);
}
