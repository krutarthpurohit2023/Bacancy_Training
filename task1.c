#include <stdio.h>
#include <string.h>

#define add(a,b) printf("Addition of %0.3f + %0.3f = %0.3f",a,b,a+b);
#define subtract(a,b) printf("Subtraction of %0.3f - %0.3f = %0.3f",a,b,a-b);
#define mult(a,b) printf("Multiplication of %0.3f * %0.3f = %0.3f",a,b,a*b);
#define divide(a,b) printf("Divide of %0.3f / %0.3f = %0.3f",a,b,a/b);

int main()
{
    int n;
    float a,b;
    char rerun[3];
    label: fflush(stdin);
    lable1: fflush(stdin);
    
    printf("Enter \n1- Addition\n2- Subtraction\n3- Multiplication\n4- Division\n\n");
    scanf("%d",&n);

    switch (n)
    {
        case 1:
            printf("Enter the values of a and b- ");
            scanf("%f %f",&a,&b);
            printf("\n\nsize - %d\n",sizeof(a));
            add(a,b);
            break;
        case 2:
            printf("Enter the values of a and b- ");
            scanf("%f %f",&a,&b);
            subtract(a,b);
            break;
        case 3:
            printf("Enter the values of a and b- ");
            scanf("%f %f",&a,&b);
            mult(a,b);
            break;
        case 4:
            printf("Enter the values of a and b- ");
            scanf("%f %f",&a,&b);

            if (b != 0.0){
                divide(a, b);
            }
            else{
                printf("\n\n%d cannnot be divided by 0\n\n\n", a);
                goto label;
            }
            break;

        default:
            printf("\nInput is Invalid\n");
            goto label;
            break;
    }

    printf("\n\nWould you like to rerun the program? Enter Yes/No or \"help\" to get details- ");
    scanf("%s",rerun);

    if ((!(strcmp("yes",rerun)) || !(strcmp("YES",rerun)) || !(strcmp("Yes",rerun))))
        goto label;
    else if (!(strcmp("help", rerun)))
        goto lable1;
    else{
        printf("\n\nInput is invalid\n\n\n");
        goto label;
    }
    
    
}