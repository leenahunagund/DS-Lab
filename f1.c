//without return type , without passing arguments
#include<stdio.h>
void add()
{
    int a,b,sum;
    printf("enter the 2 numbers :\n ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("\nthe sum is : %d ",sum);
}
void main()
{
    add();
}