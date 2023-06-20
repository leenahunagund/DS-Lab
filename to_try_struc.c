//program to try structure//
#include<stdio.h>
#include<stdlib.h>
struct book_bank
{
    char title[100];
    char author[100];
    int pages;
    float price;
};
void main()
{
    struct book_bank b1,b2;
    printf("enter the nameof book, author,number of pages,price of first book");
    scanf("%s%s%d%f",b1.title,b1.author,&b1.pages,&b1.price);
    printf("enter the name of book, author,number of pages,price of second book");
    scanf("%s%s%d%f",b2.title,b2.author,&b2.pages,&b2.price);
    printf("the name of the book:%s\nthe author:%s\nthe number of pages:%d\nthe price of book:%f",b1.title,b1.author,b1.pages,b1.price);
    printf("the name of the book:%s\nthe author:%s\nthe number of pages:%d \nthe price of book:%f",b2.title,b2.author,b2.pages,b2.price);
    
}