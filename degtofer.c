#include <stdio.h>

int convert(int *ptr);

int main(){
    int a;
    scanf("%d",&a);
    float ans = convert(&a);
    printf("\n\nans= %0.2f",ans);
}

int convert(int *ptr){

    return ((*ptr)*(9/5)+32);

}