//program to find the sum of cos series with accuracy//
#include<stdio.h>
#include<math.h>
#include<stdio.h>
void main()
{
    int x1,n;
    float accuracy ,x, term, denominater,cosval,cosx;
    printf("enter the value of angle in degree:\n");
    scanf("%f",&x);
    x1=x;
    x=x*(3.142/180);
    cosval=cos(x);
    printf("enter the accuracy for the result\n");
    scanf("%f",&accuracy);
    term=1;
    n=1;
    cosx=term;
    do  
     {
        denominater= 2*n*((2*n)-1);
        term=(term*x*x*(-1))/(denominater);
        cosx=cosx+term;
        n=n+1;
     }
     while( accuracy <=fabs(cosval-cosx));
       {
        printf("sum of cosine series = %f\n",cosx);
        printf("using library function cos(%d)=%f\n",x1,cos(x));
       }
     
}