//program to find the norm and trace of the matrix//
#include<stdio.h>
#include<math.h>
void main() 
{
    int m,n,i,j,a[10][10],trace=0,b=0,sum=0;
    float norm;
    printf("enter the order of the matrix:\n");
    scanf("%d%d",&m,&n);
    printf("enter the elements of the matrix:\n");
    for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
         {
            scanf("%d",&a[i][j]);
         }
     }
    printf("the entered matrix is:\n");
    for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
         {
            printf("%d\t",a[i][j]);
            if(j==n-1)
             {
                printf("\n\n");
             }
         }
     }
    for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
         {
            b=a[i][j]*a[i][j];
            sum=sum+b;

         }
     }
    norm=sqrt(sum);
    for(i=0;i<m;i++)
     {
        trace=trace+a[i][i];
     }
    printf("the norm and trace are : %f , %d ", norm,trace);

}