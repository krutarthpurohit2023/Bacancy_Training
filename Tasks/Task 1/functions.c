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
void show_form(struct form_details *ptr)
{
    printf("\n\nYour Age- %d ",ptr->age);
    printf("\nYour full name- %s",ptr->name);
    printf("\nYour email ID- %s", ptr->emailID);
}
void fill_form(struct form_details *ptr)
{
    printf("\nEnter your age- ");
    scanf("%d", &(ptr->age));
    fflush(stdin);
    printf("\nEnter your full name- ");
    gets(ptr->name);
    printf("\nEnter your email ID- ");
    gets(ptr->emailID);
}
void clear_form(struct form_details *ptr)
{
    memset(ptr->name , '\0', 8*sizeof(char)); 
    memset(ptr->emailID , '\0', 8*sizeof(char)); 
    printf("\nForm after clearing the details\n");
    printf("\n\nYour Age- %d ",(ptr->age) = 0);
    printf("\nYour full name- %s",ptr->name);
    printf("\nYour email ID- %s", ptr->emailID);
}
