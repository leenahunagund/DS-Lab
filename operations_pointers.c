//program to perform operations on pointers//
#include<stdio.h>
void main()
{
    int a,b,sum,diff,prod,quo,rem,*p,*q;
    printf("enter 2 numbers to perform operations:\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    sum=(*p)+(*q);
    diff=(*p)-(*q);
    prod=(*p)*(*q);
    quo=(*p)/(*q);
    rem=(*p)%(*q);
    printf("sum=%d\ndiff=%d\nproduct=%d\nquotient=%d\nremainder=%d",sum,diff,prod,quo,rem);

}