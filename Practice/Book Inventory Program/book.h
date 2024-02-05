#ifndef BOOK_H__
#define BOOK_H__

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool SET_FLAG;

struct book_store
{
    char author_name[40];
    char book_title[40];
    unsigned int book_cost;
    char book_publisher[40];
    unsigned int stock_position;
};

int search_for_the_book(struct book_store book_details[] , char entered_book_author[] , char entered_book_title[]);

#endif //BOOK_H__