/*
Write a program to create a list of books details.
The details of a book include title, author, publisher,
publishing year, number of pages, and price
*/
#include <stdio.h>
#define X 1

struct book{

    char title[10];
    char author[10];
    char publisher[10];
    int year;
    int pages;
    int price;
};

void main(){
    int i;
    struct book s[X];
    for(i = 0; i < X; i++){
        printf("Enter book title : ");
        scanf("%s",s[i].title);

        printf("Enter author name : ");
        scanf("%s",s[i].author);

        printf("Enter publisher name : ");
        scanf("%s",s[i].publisher);

        printf("Enter publishing year : ");
        scanf("%d",&s[i].year);

        printf("Enter number of pages: ");
        scanf("%d",&s[i].pages);

        printf("Enter Book price: ");
        scanf("%d",&s[i].price);
    }

    printf("\n|------------ Book Details--------------|");
    printf("\nTitle\tAuthor\tPublisher\tPublish Year\tpages\tBook price");
    for(i = 0; i < X; i++){
        printf("\n%s \t %s \t %s \t\t %d \t %d \t %d",s[i].title,s[i].author,s[i].publisher,s[i].year,s[i].pages,s[i].price);
    }
}

