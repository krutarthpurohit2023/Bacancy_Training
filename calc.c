#include <Stdio.h>
void fun(int x)
{
    int m,n,c;
    printf("\nEnter a and b- ");
    scanf("%d %d",&m,&n);
    switch (x)
    {
    case 1:
         c = m+n;
        printf("\nc= %d",c);
        break;
    case 2:
         c = m-n;
        printf("\nc= %d",c);
        break;
        
    default:
    printf("\nWrong Input");
        break;
    }
}

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter 1 or 2- ");
    scanf("%d",&a);

    fun(a);
    return 0;
}
