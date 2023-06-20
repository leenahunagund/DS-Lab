//program to insert and delete element from an array
#include<stdio.h>
void main()
{
    int i , n, a[5],ele,pos,p,j;
    printf("enter the number of elements of the array:\n");
    scanf("%d",&n);
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be inserted and the position:\n");
    scanf("%d%d",&ele,&pos);
    j=n;
    n=n+1;
    while(j>=(pos-1))
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[pos-1]=ele;
    printf("the new array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    //to delete element
    printf("\nenter the position of the element to be deleted:\n");
    scanf("%d",&p);
    for(j=p;j<n;j++)
    {
        a[j-1]=a[j];
    }
    n=n-1;
    printf("the elements of the array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}