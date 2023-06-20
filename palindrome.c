//program to reverse a number and check if its a palindrome or not//
#include<stdio.h>
void main()
{
    int n,n1,reverse=0,digit;
    printf("enter any number:\n");
    scanf("%d",&n);
    if(n<0) 
     {
        n=-n;
     }
     n1=n;
    while(n)
     {
        digit=n%10;
        reverse=10*reverse+digit;
        n=n/10;
     }
    printf("the reverse is:%d\n",reverse);
    if(n1==reverse)
     {
        printf("the entered number is a palindrome");
     } 
     else  printf("the entered number is not a palindrome");
}