//program to search an element from an array linearly//
#include<stdio.h>
void main()
{
    int a[100],n,i,ele;
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
    printf("enter the element to be searched");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
     {
       if(a[i]==ele)
       {
        printf("the element %d  is present in %d place ",ele,i+1);
        break;
       }
     }
    if (i==n)
     {
        printf("the element %d is not present in the array ", ele);
     }
}
