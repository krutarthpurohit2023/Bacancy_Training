#include "stdio.h"
#include "math.h"

void palindrome(int *ptr){
    int count,ans=0;
    while (*ptr>0)
    {                               
        int x = *ptr%10;               
        //printf("\n\nx = %d", x);

        ans = ans + pow(x,4);
        //printf("\ny = %d",ans);

        *ptr = *ptr /10;     
    }   
    printf("\nans = %d",ans);
}

int main()
{

    int a;
    scanf("%d",&a);      
    palindrome(&a);

    return 0;
}
