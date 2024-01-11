#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "structure.h"

void addition(float *element_1, float *element_2)
{
    printf("\n%0.2f + %0.2f = %0.2f", *element_1 , *element_2 , (*element_1) + (*element_2) );
}
void subtraction(float *element_1, float *element_2)
{
    printf("\n%0.2f - %f = %0.2f\n", *element_1 , *element_2 , (*element_1) - (*element_2) );
}
void multiplication(float *element_1, float *element_2)
{
    printf("\n%0.2f * %0.2f = %0.2f\n", *element_1 , *element_2 , (*element_1) * (*element_2) );
}
void division(float *element_1, float (*element_2))
{
    if (*element_2 != 0)
    {
        printf("\n%0.2f / %0.2f = %0.2f\n", (*element_1) , (*element_2) , (*element_1) / (*element_2) );
    }
    else
    {
        printf("\n%0.2f cannot be divided by '0' - undefined\n", *element_1);
    }
}
void number_compare(float *element_1, float *element_2)
{
    if (*element_1 == *element_2)
    {
        printf("\n%0.2f is equal to %0.2f\n", *element_1 , *element_2);
    }
    else
    {
        ( *element_1 < *element_2 )  ?  printf("\n%0.2f is greater than %0.2f" , *element_2 , *element_1)  :  printf("\n%0.2f is greater than %0.2f" , *element_1 , *element_2);
    }
}
void string_details(void)
{
    int i , word_count, character_count;
    char name[25];

    i = 0;
    word_count = 0;
    
    fflush(stdin);
    
    printf("\nEnter entire string to get it's details- ");
    gets(name);

    while (name[i] != EOF) 
    {  
        if(name[i] == ' ')
        {
            word_count++;
        }
        i++;
    }
    printf("\nTotal number of words are- %d", word_count+1);
    
}
void show_form1(void) 
{
    printf("\nYour Age- %d ",form1.age);
    printf("\nYour full name- %s",form1.name);
    printf("\nYour email ID- %s", form1.emailID);
}
void fill_form1(void) 
{
    printf("Enter your age- ");
    scanf("%d",&form1.age);
    fflush(stdin);
    printf("\nEnter your full name- ");
    gets(form1.name);
    printf("\nEnter your email ID- ");
    gets(form1.emailID);
}
void show_form2(void) 
{
    printf("\nYour Age- %d ",form2.age);
    printf("\nYour full name- %s",form2.name);
    printf("\nYour email ID- %s", form2.emailID);
}
void fill_form2(void) 
{
    printf("Enter your age- ");
    scanf("%d",&form2.age);
    fflush(stdin);
    printf("\nEnter your full name- ");
    gets(form2.name);
    printf("\nEnter your email ID- ");
    gets(form2.emailID);
}

int main()
{
    char command_entered[15];
    
    do
    {
        printf("\n\nType \nadd: Addition\nsub: Subtraction\nmul: Multiplication\ndiv: Division\nnumcmp: Number compare\nname_details: to get the details of the entered string\nfill_form1: to enter the details in the form-1\nshow_form1: to show the details of the form-1\n\nfill_form2: to enter the details in the form-2\nshow_form2: to show the details of the form-2\n\nEnter the command: ");
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
        else if (!strcmp(command_entered, "fill_form1"))
        {
            fill_form1();  
        }
        else if (!strcmp(command_entered, "show_form1"))
        {
            if((form1.age == 0))
            { 
                printf("\nYou have not fill the from yet. Please enter the details first.");
            }
            else
            {
                show_form1();   
            }            
        }
        else if (!strcmp(command_entered, "fill_form2"))
        {
            fill_form2();  
        }
        else if (!strcmp(command_entered, "show_form2"))
        {
            if((form2.age == 0))
            {
                printf("\nYou have not fill the from yet. Please enter the details first.");
            }
            else
            {
                show_form2();   
            }            
        }
        
        printf("\n\nwould you like to re-run the program?\nEnter\nyes: to re-run\nno: to exit\nEnter - ");
        scanf("%s", &command_entered);
        
    } while (!strcmp(command_entered, "yes"));
    

}