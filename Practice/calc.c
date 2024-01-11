#include <Stdio.h>
void division(int *pm,int *pn);
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
    case 3:
        division(&m,&n);
        break;
    case 4:
        c = (m*n);
        printf("\nC= %d",c);
        break;

    default:
    printf("\nWrong Input");
        break;
    }
}

int main()
{
    int a;
    printf("\n\nEnter \n1- Addition\n2- Substraction\n3-Division\n4- Multiplication\n\n");
    scanf("%d",&a);

    fun(a);
    return 0;
}
void division(int *pm, int *pn){

    float x= (float) (*pm)/(*pn); //
    printf("\nc= %0.3f",x);

}