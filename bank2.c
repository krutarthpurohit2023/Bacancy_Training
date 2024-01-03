#include <stdio.h>

void credit(int am,int pr){
    pr = pr + am;
    printf("\n\nUpdated balance- %d", pr);
}
void debit(int am, int pr)
{
    pr = pr - am;
    printf("\n\nUpdated balance- %d", pr);
}


int main()
{
    static int balance = 15000;
    int n,amount;

        printf("\nYour current balance is- %d",balance);
    
    
        printf("\nEnter\n1- debit\n2-credit\n");
        scanf("%d",&n);

        printf("\n\nEnter the amount you want to debit/credit- ");
        scanf("%d",&amount);


    switch (n)
    {
    case 1:
        debit(amount, balance);
        break;
    
    case 2:
        credit(amount, balance);
        break;

    default:
        printf("\n\nInvalid Input");
        break;
    }

    return 0;
}
