#include <stdio.h>

void fun(int *ptr){

for (int i = 0; i < 4; i++)    
    printf("\n%d",ptr[i]);
}

int main(){

    int arr[] = {0, 50, 75, 100};
    //int *ptr = arr;
    

    fun(arr);
}




/*
int a=1; // 0x00004
*/


