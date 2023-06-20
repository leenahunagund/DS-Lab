//program to sort the elements in ascending order using bubble sort//
#include<stdio.h>
void main()
{
    int a[100],n,i,d,swap;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elements of the array are:\n");
    for(i=0;i<n;i++)
     {
      printf("%d\t",a[i]);
     }

    for (i=0;i<n;i++)
    { 
      for (d=0;d<n-i-1;d++)
        {
         if (a[d]>a[d+1])
         {
            swap=a[d];
            a[d]=a[d+1];
            a[d+1]=swap;
         }
        }
    }
    
  printf("\nprinted list in ascending order is:\n");
  for(i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
}
