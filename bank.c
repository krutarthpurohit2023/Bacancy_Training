#include "stdio.h"
int static balance=15000;
void debit(int *am){
    balance = balance - (*am);

    printf("Your current balance after debating is- %d", balance);
}
void credit(int *an){
    balance = balance + (*an);

    printf("Your current balance after crediting is- %d", balance);

}
int main()
{
    int amount;
    char str[4];
    do
    {
        str[4]=' ';
        int num;
        printf("Your current balance- %d",balance);
        printf("\n\nWould you like to credit or debt your balance?\nEner 1 to debit\nEnter 2 to credit");
        scanf("%d",&num);
        printf("\n\nEnter the debiting/crediting amount- ");
        scanf("%d",&amount);

        switch (num)
        {
        case 1:
             debit(amount);

            break;
        case 2:
             credit(amount);
            break;
        
        default:
            printf("\n\nInvalid Input");
            break;
        }

        printf("\n\nWould you like to re-run the program? Enter yes or no");
        gets(str);
        
    } while ( str == 'no');
    
    
    
    return 0;
}

