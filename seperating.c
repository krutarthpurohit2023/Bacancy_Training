#include "stdio.h"

int main()
{

    int a;
    scanf("%d",&a);                 //eg- 12

    while (a>0)
    {                               // 1st Iteration             2nd Iteration
        int x = a%10;               //x = 12%10 = 2              x = 1%10 = 1
        printf("\nx = %d ", x);     //x = 2 printed              x = 1 printed
        a = a/10;                   //a = 12/10 = 1              x = 1/10 = 0
        printf("\n%d",a);
    }
    printf("\n0%10 = %d",0%10);
    return 0;
}
