#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct book_store{
    char author_name[40];
    char book_title[40];
    unsigned int book_cost;
    char book_publisher[40];
    unsigned int stock_position;
};

int search_for_the_book(struct book_store book_details[] , char entered_book_author[] , char entered_book_title[])
{
    bool SET_FLAG = false;
    for(int searching_element = 0; searching_element < 5 ; searching_element++)
    {
        if(  ((strcmp(entered_book_author,book_details[searching_element].author_name)) == 0)  &&  ((strcmp(entered_book_title,book_details[searching_element].book_title)) == 0)  )
        {
            return searching_element;
            SET_FLAG = true;
            break;
        }
    }
    if (!SET_FLAG)
    {
        return -1;
    }
}

int main()
{

    char entered_book_title[40];
    char entered_book_author[40];
    unsigned int return_type;
    unsigned int entered_book_quantity;
    unsigned int final_book_cost;
    
    struct book_store book_details[5] = {
       {.author_name = "Avinash Giri"    , .book_title = "C Programming"   , .book_cost = 2500     , .book_publisher = "Purohit Publisher" , .stock_position =150    },
       {.author_name = "Yash Suvariya"   , .book_title = "M Richi"         , .book_cost = 25000    , .book_publisher = "Avi Publisher"     , .stock_position= 250000 },
       {.author_name = "Krutarth Purohit", .book_title = "Amazing 7"       , .book_cost = 1500     , .book_publisher = "Purohit Publisher" , .stock_position= 150    },
       {.author_name = "Shashant Patel"  , .book_title = "Dance with me"   , .book_cost = 2500     , .book_publisher = "Papa's Publisher"  , .stock_position= 50     },
       {.author_name = "Dhvaneel Shah"   , .book_title = "Silence"         , .book_cost = 100      , .book_publisher = "BVM Publisher"     , .stock_position= 100    },
    };
    
    label: 
    fflush(stdin);
    printf("\n-----Books Available-----\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Author Name: %s \nBook Title: %s \nBook Cost: %d \nBook Publisher: %s \nCurrent Stock Available: %d\n\n", book_details[i].author_name, book_details[i].book_title, book_details[i].book_cost, book_details[i].book_publisher, book_details[i].stock_position);
    }
    
    printf("\nEnter the book author name: ");      
    gets(entered_book_author); //scanf("%[^\n]s",entered_book_author);
    fflush(stdin);
    printf("\nEnter the bool title: ");
    gets(entered_book_title);
    fflush(stdin);

    return_type = search_for_the_book(book_details , entered_book_author , entered_book_title);
    //printf("return typr: %d", return_type);
    if(return_type < 5)
    {
        printf("\nEnter the number of quantity you want to purchase: ");
        scanf("%d",&entered_book_quantity);

        if (entered_book_quantity < book_details[return_type].stock_position)
        {
            final_book_cost = (book_details[return_type].book_cost) * entered_book_quantity;

            printf("\n\nNumber of quantity: %d",entered_book_quantity);
            printf("\nYour Grand Total: Rs. %d",final_book_cost);
        }
        else
            printf("\nSORRY: Book is out of stock");
    }
    else
        printf("\nERROR: Book not found");

        goto label;
    return 0;
}
