//program to find the mean, variance and standard deviation usign appropriate formula
#include<stdio.h>
#include<math.h>
#define MAXSIZE 10
void main()
{
    float x[MAXSIZE];
    int i,n;
    float avg, variance,std_deviation,sum=0,sum1=0;
    printf("enter the number of real numbers");
    scanf("%d",&n);
    printf("enter %d real numbers\n",n);
    for(i=0;i<n;i++)
     {
        scanf("%f",&x[i]);
     }
    for (i=0;i<n;i++)
     {
        sum=sum+x[i];  
     }
    avg=sum/(n);
    for(i=0;i<n;i++)
     {
        sum1 = sum1+ pow ( x[i]- avg , 2 );
     }
    variance=sum1/(n);
    std_deviation=sqrt(variance);
    printf("the average , standard deviation and variance of the numbers are : %.2f,%.2f,%.2f\n", avg, variance, std_deviation);
}