//program to find the sum of cos series i.e value of cos//
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int n , x1,i;
    float sum,term,x;
    printf("enter the number of terms and value of angle in degree:\n");
    scanf("%d%d",&n,&x1);
    x=(3.142/180)*x1;
    i=0;
    sum=0;
    term=1;
    while(i<=n)
     {
        sum=sum+term;
        term=(term*x*x*(-1))/((i+1)*(i+2));
        i=i+2;
     }
    printf("the sum of series without using library function is : %.3f",sum);
    printf("\nthe sum of series with using library function is : %.3f",cos(x));
}