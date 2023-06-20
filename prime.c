//program to check if a number is prime or not//
#include<stdio.h>
void main()
{
    int i,n;
    printf("enter any number:\n");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
     {
        if((n%i)==0)
         {
            printf("number is not a prime");
            break;
         }
        else printf("number is a prime");
        break;
     }
     
}