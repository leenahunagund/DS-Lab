//program  to find the sum of digits of a  number by reducing it into a single digit//
#include<stdio.h>
#include<math.h>
void main()
{
    int n,digit,sum,n1;
    printf("enter the number:\n");
    scanf("%d",&n);
    if(n<0)
     {
        n=-n;
        sum=0;
     }
    n1=n;
    NXT:
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    if(sum>9)
     {
        n=sum;
        sum=0;
        goto NXT;
     }
    printf("the sum of digits of the number %d is : %d ",n1,sum);
}
