//with arguments without return type
#include<stdio.h>
void add(int m, int n)
{
    int sum;
    sum=m+n;
    printf("the sum is :%d" ,sum);
}
void main()
{
    int a,b;
    printf("enter the 2 numbers : ");
    scanf("%d%d",&a,&b);
    add(a,b);
}