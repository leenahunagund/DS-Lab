//program to add and subtract 2 matrices//
#include<stdio.h>
void main()
{
   int i,j,m,n,p,q,a[50][50],b[50][50],sum[50][50],diff[50][50];
    printf("enter the order of matrix A\n");
    scanf("%d%d",&m,&n);
    printf("enter the order of matrix B\n");
    scanf("%d%d",&p,&q);
    if((m==p)&&(n==q))
     {
        printf("enter the elements of matrix A\n");
        for(i=0;i<m;i++)
         {
            for(j=0;j<n;j++)
             {
                scanf("%d",&a[i][j]) ;
             }
         }
        printf("enter the elements of matrix B\n");
        for(i=0;i<p;i++)
         {
            for(j=0;j<q;j++)
             {
                scanf("%d",&b[i][j]);
             }
         }
     }
    //displaying the matrices
    printf("the matrix A is :\n");
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
    printf("the matrix B is :\n");
        for(i=0;i<p;i++)
         {
            for(j=0;j<q;j++)
             {
                printf("%d\t",b[i][j]);
                if(j==q-1)
                 {
                    printf("\n\n");
                 }
             }
         }
    //sum of matrices
    for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
         {
          sum[i][j]=a[i][j]+b[i][j];
         }
     }
    //difference of 2 matrices
    for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
         {
          diff[i][j]=a[i][j]-b[i][j];
         }
     }
    //displaying the result
    printf("the addition of 2 matrices are :\n");
    for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
         {
          printf("%d\t",sum[i][j]);
          if(j==n-1)
           {
            printf("\n\n");
           }
         }
     }
    printf("the difference of 2 matrices are :\n");
    for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
         {
          printf("%d\t",diff[i][j]);
          if(j==n-1)
           {
            printf("\n\n");
           }
         }
     }
}
