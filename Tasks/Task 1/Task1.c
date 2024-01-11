#include "structure.h"
#include "functions.c"

int main()
{
    char command_entered[15];
    int form_number;
    
    do
    {
        printf("\nType\
                \nadd: Addition\nsub: Subtraction\
                \nmul: Multiplication\
                \ndiv: Division\
                \nnumcmp: Number compare\
                \nname_details: to get the details of the entered string\
                \nfill_form: to enter the details in the form\
                \nshow_form: to show the details of the form\
                \n\nEnter the command: ");
        
        scanf("%s", &command_entered);

        if (!strcmp(command_entered, "add"))
        {
            printf("Enter the data inside the varibales- ");
            scanf("%f", &number.first_variable);
            scanf("%f", &number.second_variable);

            addition(&(number.first_variable) , &(number.second_variable));
        }
        else if (!strcmp(command_entered, "sub"))
        {
            printf("Enter the data inside the varibales- ");
            scanf("%f", &number.first_variable);
            scanf("%f", &number.second_variable);

            subtraction(&(number.first_variable) , &(number.second_variable));
        }
        else if (!strcmp(command_entered, "mul"))
        {
            printf("Enter the data inside the varibales- ");
            scanf("%f", &number.first_variable);
            scanf("%f", &number.second_variable);

            multiplication(&(number.first_variable) , &(number.second_variable));
        }
        else if (!strcmp(command_entered, "div"))
        {
            printf("Enter the data inside the varibales- ");
            scanf("%f", &number.first_variable);
            scanf("%f", &number.second_variable);

            division(&(number.first_variable) , &(number.second_variable));
        }
        else if (!strcmp(command_entered, "numcmp"))
        {
            printf("Enter the data inside the varibales- ");
            scanf("%f", &number.first_variable);
            scanf("%f", &number.second_variable);

            number_compare(&(number.first_variable) , &(number.second_variable));
        }
        else if (!strcmp(command_entered, "name_details"))
        {
            string_details();
        }
        else if (!strcmp(command_entered, "show_form"))
        {
            printf("\nIf you wish to get the details of form 1 then enter 1\nIf you wish to get the details of form 2 then enter 2\n\nEnter the number- ");
            scanf("%d",&form_number);

            if (form_number == 1)
            {
                if((form1.age == 0))
                {
                    printf("\nYou have not fill the from yet. Please enter the details first.");
                }
                else
                {
                    
                    show_form(&form1);
                }
                
            }
            else if (form_number == 2)
            {
                if((form2.age == 0))
                {
                    printf("\nYou have not fill the from yet. Please enter the details first.");
                }
                else
                {
                    
                    show_form(&form2);
                }
            }
            else
            {
                printf("\n\nYou have entered invalid number\n");
            }
        }
        else if (!strcmp(command_entered, "fill_form"))
        {
            printf("\nIf you wish to enter the details of form 1 then enter 1\nIf you wish to enter the details of form 2 then enter 2\n\nEnter the number- ");
            scanf("%d",&form_number);

            if (form_number == 1)
            {
                fill_form(&form1);

            }
            else if (form_number == 2)
            {
                fill_form(&form2);
            }
            else
            {
                printf("\n\nYou have entered invalid number\n");
            }
        }
        else if (!strcmp(command_entered, "clear_form"))
        {
            printf("\nIf you wish to cleat the details of form 1 then enter 1\nIf you wish to clear the details of form 2 then enter 2\n\nEnter the number- ");
            scanf("%d",&form_number);

            if (form_number == 1)
            {
                clear_form(&form1);

            }
            else if (form_number == 2)
            {
                clear_form(&form2);
            }
            else
            {
                printf("\n\nYou have entered invalid number\n");
            }
        }
        
        printf("\n\nwould you like to re-run the program?\nEnter\nyes: to re-run\nno: to exit\nEnter - ");
        scanf("%s", &command_entered);
        
    } while (!strcmp(command_entered, "yes"));
    

}

/*
auto - garbage - local
static -     0    - local
extern -      0     - gloabal
register - garbage          - local
*/