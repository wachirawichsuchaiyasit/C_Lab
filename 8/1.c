#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cellphone {
    char name[40]; 
    char brand[20]; 
    int calls ;
    double price ;
    double vat ;
};

// struct __Book {
//     char title[100] ;
//     int total_page ;
//     int read ;
// };

// void printBook(struct __Book book) {
//     printf("Title %s",book.title);
//     printf("Read: %d/%d\n",book.read,book.total_page) ;
//     printf("------------\n");
// }

// int main() {

//     struct __Book cppBook ;

//     cppBook.total_page = 128 ;
//     cppBook.read = 30 ;

//     printBook(cppBook);

//     return 0 ;

// }