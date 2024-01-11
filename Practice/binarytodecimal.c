#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int arr[4];
    double ans;

        printf("\nEnter the binary number from LSB to MSB order\n");
    for (int i = 0; i < 4; i++)
        scanf("%d", &arr[i]);
    
    

    int size = sizeof(arr)/sizeof(arr[0]);

        printf("\n\nThe sequence is- ");
    
    for (int i = size; i >= 1; i--)
        printf("%d", arr[i-1]);

    for (int i = size; i >= 1; i--)
        ans = ((pow(2,(i-1)))*arr[i-1]) + ans;      
    
    
        printf("\nans = %.3lf",ans);


    return 0;
}
/*
        1   0   0   1
 2^n    8   4   2   1
   n    3   2   1   0

*/