//without arguments with return type
#include<stdio.h>
int sum()
{
    int a,b,sum;
    printf("enter the 2 numbers \n");
    scanf("%d%d",&a,&b);
    return a+b;
}
void main()
{
    printf("the sum is : %d ", sum());
}