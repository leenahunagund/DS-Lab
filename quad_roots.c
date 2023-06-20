//program to find the roots of a quadratic equation and print them
#include<stdio.h>
#include<math.h>
void main()
{
    int a, b, c, r1,r2,d;
    printf("Enter the coefficients of the quadratic equation\n");
    scanf("%d%d%d",&a,&b,&c);
    d=((b*b)-(4*a*c));
    if(d<0)
     {
        printf("the roots are imaginary");
     }
    else if (d=0)
     {
        r1=r2=(-b/(2*a));
        printf("the roots are real and equal and they are : %d,%d",r1,r2);
     }
    else 
     {
        r1=((-b+sqrt(d))/(2*a));
        r2=((-b-sqrt(d))/(2*a));
        printf("the roots are real and distinct and they are : %d,%d",r1,r2);

     }
}