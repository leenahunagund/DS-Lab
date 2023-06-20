//program to generate fibonacci numbers//
#include<stdio.h>
void main()
{
    int n,f1=0,f2=1,f,i;
    printf("enter the number of terms:\n");
    scanf("%d",&n);
    printf("the fibonacci numbers are :\n1%d\n%d\n",f1,f2);
    for(i=0;i<n-2;i++)
     {
        f=f1+f2;
        printf("%d\n",f);
        f1=f2;
        f2=f;
     }

}