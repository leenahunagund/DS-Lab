//program to find an element using binary search
#include<stdio.h>
void main()
{
    int i,n ,ele,a[100],first, last, mid;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for (i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
     }
    printf("enter the element to be searched\n");
    scanf("%d",&ele);
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last)
     {
        if(a[mid]<ele)
         {
           first=mid+1;
         }
        else if (a[mid]==ele)
         {
           printf("the element %d is present at %d location " , ele,mid+1);
           break;
         }
        else 
        last=mid-1;
        mid=(first+last)/2;
     }
    if(first>last)
     {
        printf("the element %d is not present in the list",ele);
     }
}
