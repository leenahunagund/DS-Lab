//program
#include<stdio.h>
int read (int);
int write(int);
int searchdelete(int b);
void main()
{
    int n,*ptr;
    printf("enter the number of elements in the array:\n");
    scanf("%d",&n);
    int z[n];
    ptr=z;
    ptr =(int *)malloc(sizeof(int)*n);
}
int read ()
{
  int i ;
   for(i=0;i<n;i++)
   {
    scanf("%d",ptr[i]=i+1);
   }
}
int write()
{
    printf("the elements of the array are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d",ptr[i]);
    }
}
int searchdelete()
{
    int ele;
    printf("enter a number in the array:\n");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if (*ptr[i]==ele)
        {
            
        }
    }
}
