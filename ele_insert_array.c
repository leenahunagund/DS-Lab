//program to insert an element in the array//
#include<stdio.h>
void main()
{
    int a[10],i,j,ele,n,pos;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("the array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nenter the element to be inserted and the position:\n");
    scanf("%d%d",&ele,&pos);
    j=n;
    n=n+1;
    while(j>=pos)
    {
        a[j+1]=a[j];
        j++ ;
    }
    a[pos]=ele;
    printf("\nthe new array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }


}