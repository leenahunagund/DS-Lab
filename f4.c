//with arguments with return type
#include<stdio.h>
int sum(int a , int b)
{
    return a+b;
}
void main()
{
    int m,n;
    printf("enter the 2 numbers\n ");
    scanf("%d%d",&m,&n);
    printf("the sum is : %d", sum(m,n));
}